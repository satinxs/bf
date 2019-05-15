static const char valid_ops[] = "<>,.-+[]";
static int find_op(char token)
{
    for (int i = 0; valid_ops[i] > 0; i++)
        if (valid_ops[i] == token)
            return i;

    return -1;
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
            if (memory[mp] == 0) {
                int bracket_nesting = 1;
                int saved_ip = ip;

                while (bracket_nesting && ++ip < program->length) {
                    if (program->ops[ip].code == OP_BRACKET_RIGHT) {
                        bracket_nesting--;
                    } else if (program->ops[ip].code == OP_BRACKET_LEFT) {
                        bracket_nesting++;
                    }
                }

                if (!bracket_nesting) {
                    break;
                } else {
                    printf("Unmatched '[' at position = %d\n", saved_ip);
                    exit(-1);
                }
            }
            break;
        case OP_BRACKET_RIGHT:
            if (memory[mp] != 0) {
                int bracket_nesting = 1;
                int saved_ip = ip;

                while (bracket_nesting && ip > 0) {
                    ip--;
                    if (program->ops[ip].code == OP_BRACKET_LEFT) {
                        bracket_nesting--;
                    } else if (program->ops[ip].code == OP_BRACKET_RIGHT) {
                        bracket_nesting++;
                    }
                }

                if (!bracket_nesting) {
                    break;
                } else {
                    printf("Unmatched ']' at ip = %d\n", saved_ip);
                    exit(-1);
                }
            }
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
        if (memory[mp] == 0) {
            int bracket_nesting = 1,
                saved_ip = ip;

            while (bracket_nesting && ++ip < program->length) {
                int code = array_get(program, ip).code;
                if (code == OP_BRACKET_RIGHT)
                    bracket_nesting--;
                else if (code == OP_BRACKET_LEFT)
                    bracket_nesting++;
            }

            if (!bracket_nesting) {
                DISPATCH();
            } else {
                printf("Unmatched '[' at position = %d\n", saved_ip);
                exit(-1);
            }
        }
        DISPATCH();

    P_BRACKET_RIGHT:
        if (memory[mp] != 0) {
            int bracket_nesting = 1,
                saved_ip = ip;

            while (bracket_nesting && ip > 0) {
                ip--;
                int code = array_get(program, ip).code;
                if (code == OP_BRACKET_LEFT)
                    bracket_nesting--;
                else if (code == OP_BRACKET_RIGHT)
                    bracket_nesting++;
            }

            if (!bracket_nesting) {
                DISPATCH();
            } else {
                printf("Unmatched ']' at ip = %d\n", saved_ip);
                exit(-1);
            }
        }
        DISPATCH();

    P_END:
        break;
    }

#undef DISPATCH
}
#endif