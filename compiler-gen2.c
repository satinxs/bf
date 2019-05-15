void find_forwards_reference(op_array_t* program, int index)
{
    int ref = -1;

    int open_brackets = 0;
    for (int j = index; j < program->length; j++) {
        if (program->ops[j].code == OP_BRACKET_LEFT)
            open_brackets++;
        if (program->ops[j].code == OP_BRACKET_RIGHT)
            open_brackets--;

        if (open_brackets == 0) {
            program->ops[j].ref = index;

            ref = j;
            break;
        }
    }

    if (open_brackets != 0) {
        printf("Error, unmatched '[' at position %d\n", index);
        exit(-1);
    }

    program->ops[index].ref = ref;
}

op_array_t* compiler_pass1(char* source)
{
    op_array_t* array = array_init();

    int i = 0;
    while (source[i] > 0) {
        int code = find_op(source[i]);

        if (code > -1) {
            op_t op;
            op.code = code;

            array_add(array, op);
        }

        i++;
    }

    op_t op_end;
    op_end.code = OP_END;
    array_add(array, op_end);

    for (int i = 0; i < array->length; i++) {
        if (array->ops[i].code == OP_BRACKET_LEFT)
            find_forwards_reference(array, i);
    }

    return array;
}

#ifndef USE_CGOTO
void interpret_pass1(op_array_t* program)
{
    int* memory = calloc(MEMORY_SIZE, sizeof(int));

    int ip = 0; //Instruction pointer
    int mp = 0; //Memory pointer

    while (ip < program->length) {
        op_t op = array_get(program, ip);

        switch (op.code) {
        case OP_SHIFT_LEFT:
            mp--;
            break;
        case OP_SHIFT_RIGHT:
            mp++;
            break;
        case OP_ADD:
            memory[mp]++;
            break;
        case OP_SUB:
            memory[mp]--;
            break;
        case OP_WRITE:
            putchar(memory[mp]);
            break;
        case OP_READ:
            memory[mp] = getchar();
            break;
        case OP_BRACKET_LEFT:
            if (memory[mp] == 0)
                ip = op.ref;

            break;
        case OP_BRACKET_RIGHT:
            if (memory[mp] != 0)
                ip = op.ref;

            break;
        case OP_END:
            ip = program->length;
            break;

        default:
            printf("Unknown instruction %x at %d.\n", op.code, ip);
            exit(-1);
        }
        ip++;
    }
}
#endif

#ifdef USE_CGOTO
void interpret_pass1(op_array_t* program)
{
    int* memory = calloc(MEMORY_SIZE, sizeof(int));

    int ip = 0; //Instruction pointer
    int mp = 0; //Memory pointer

    void* jump_table[] = {
        &&P_SHIFT_LEFT, &&P_SHIFT_RIGHT,
        &&P_READ, &&P_WRITE,
        &&P_SUB, &&P_ADD,
        &&P_BRACKET_LEFT, &&P_BRACKET_RIGHT,
        &&P_END
    };

    while (1) {
        op_t op = array_get(program, ip);

        goto* jump_table[op.code];

#define DISPATCH()                 \
    op = array_get(program, ++ip); \
    goto* jump_table[op.code]

    P_SHIFT_LEFT:
        mp--;
        DISPATCH();

    P_SHIFT_RIGHT:
        mp++;
        DISPATCH();

    P_ADD:
        memory[mp]++;
        DISPATCH();

    P_SUB:
        memory[mp]--;
        DISPATCH();

    P_WRITE:
        putchar(memory[mp]);
        DISPATCH();

    P_READ:
        memory[mp] = getchar();
        DISPATCH();

    P_BRACKET_LEFT:
        if (memory[mp] == 0)
            ip = op.ref;

        DISPATCH();

    P_BRACKET_RIGHT:
        if (memory[mp] != 0)
            ip = op.ref;

        DISPATCH();

    P_END:
        break;
    }

#undef DISPATCH
}
#endif