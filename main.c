#include <stdio.h>
#include <time.h>

#include "utils.h"

op_array_t* do_compilation(char* file);
void do_interpret(op_array_t* program);

void interpret(op_array_t* program);

#include "compiler.h"

int main(int argc, char** argv)
{
    if (argc == 1) {
        printf("Usage: bf <file.bf>\n");
        return 0;
    }

    char* file = read_file(argv[1]);

    int start, end;

    start = clock();
    op_array_t* ops = do_compilation(file);
    end = clock();
    printf("Compilation took %dms\n", end - start);

    start = clock();
    do_interpret(ops);
    end = clock();
    printf("Interpreting took %dms\n", end - start);

    return 0;
}

op_array_t* do_compilation(char* file)
{
    op_array_t* tmp = NULL;
    op_array_t* program = compiler_pass1(file);

#ifdef OP_RUN_LENGTH
    tmp = program;

    program = compiler_op_run_length(program);

    array_destroy(tmp);
    tmp = NULL;
#endif

#ifdef JUMP_PRECALC
    tmp = program;

    program = compiler_jump_precalc(program);

    array_destroy(tmp);
    tmp = NULL;
#endif

    return program;
}

void do_interpret(op_array_t* program)
{
    interpret(program);
}
