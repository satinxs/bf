#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#include "jit.h"
#include "utils.h"

op_array_t *do_compilation(char *file);
void do_interpret(op_array_t *program);

void interpret(op_array_t *program);

#include "compiler.h"

void print_c_version(op_array_t *program)
{
    printf("#include <stdio.h>\n");
    printf("#include <stdlib.h>\n");
    printf("#include <time.h>\n");
    printf("int main(){\n");
    printf("int memory[%d];\nfor(int i=0;i<%d;i++) memory[i]=0;\n", MEMORY_SIZE, MEMORY_SIZE);
    printf("int mp = 0, start=clock(), end;\n");

    for (int i = 0; i < program->length; i++)
    {
        op_t op = program->ops[i];
        switch (op.code)
        {
        case OP_SHIFT_LEFT:
            printf("mp -= %d;\n", op.ref);
            break;

        case OP_SHIFT_RIGHT:
            printf("mp += %d;\n", op.ref);
            break;

        case OP_READ:
            printf("memory[mp] = getchar();\n");
            break;

        case OP_WRITE:
            printf("putchar(memory[mp]);\n");
            break;

        case OP_ADD:
            printf("memory[mp] += %d;\n", op.ref);
            break;

        case OP_SUB:
            printf("memory[mp] -= %d;\n", op.ref);
            break;

        case OP_BRACKET_LEFT:
            printf("J%d:\n", i);
            printf("if (memory[mp] == 0) goto J%d;\n", op.ref);
            break;

        case OP_BRACKET_RIGHT:
            printf("J%d:\n", i);
            printf("if (memory[mp] != 0) goto J%d;\n", op.ref);
            break;

        case OP_CLEAR:
            printf("memory[mp] = 0;\n");
            break;

        case OP_END:
            printf("end = clock();\n");
            printf("printf(\"Elapsed: %%dms\\n\", end - start);\n");
            break;
        }
    }

    printf("return 0;\n");
    printf("}\n");
}

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        printf("Usage: bf [-c] <file.bf>\n");
        return 0;
    }

    char *file;
    bool flag_no_interpret = false;

    if (argc == 3 && strcmp(argv[1], "-c") == 0)
    {
        file = read_file(argv[2]);
        flag_no_interpret = true;
    }
    else
        file = read_file(argv[1]);

    int start, end;

    start = clock();
    op_array_t *ops = do_compilation(file);
    end = clock();

    if (flag_no_interpret)
    {
        print_c_version(ops);

        return 0;
    }

    printf("Compilation took %dms\n", end - start);

    start = clock();
    do_interpret(ops);
    end = clock();
    printf("Interpreting took %dms\n", end - start);

    return 0;
}

op_array_t *do_compilation(char *file)
{
    op_array_t *program = compiler_pass1(file);

    program = compiler_op_run_length(program);

    program = compiler_find_common_loops(program);

    program = compiler_jump_precalc(program);

    return program;
}

void do_interpret(op_array_t *program)
{
    interpret(program);
}
