#include "utils.h"

op_array_t* compiler_pass1(char* source)
{
    op_array_t* array = array_init();

    int i = 0;
    while (source[i] > 0) {
        int code = find_op(source[i]);

        if (code > -1) {
            op_t op;
            op.code = code;
            op.ref = 1;

            array_add(array, op);
        }

        i++;
    }

    op_t op_end;
    op_end.code = OP_END;
    array_add(array, op_end);

    return array;
}

#ifdef JUMP_PRECALC

static void find_forwards_reference(op_array_t* program, int index)
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

op_array_t* compiler_jump_precalc(op_array_t* source)
{
    op_array_t* output = array_copy(source);

    for (int i = 0; i < output->length; i++) {
        if (output->ops[i].code == OP_BRACKET_LEFT)
            find_forwards_reference(output, i);
    }

    return output;
}

#endif

#ifdef OP_RUN_LENGTH

op_array_t* compiler_op_run_length(op_array_t* source)
{
    op_array_t* output = array_init();

    for (int i = 0; i < source->length;) {
        int op = array_get(source, i).code;

        if (op == OP_BRACKET_LEFT || op == OP_BRACKET_RIGHT)
            array_add(output, source->ops[i++]);
        else {
            int offset = 1;
            while (source->ops[i + offset].code == op)
                offset++;

            source->ops[i].ref = offset;
            array_add(output, source->ops[i]);
            i += offset;
        }
    }

    return output;
}

#endif