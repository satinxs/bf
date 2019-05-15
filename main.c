#include <stdio.h>
#include <time.h>

#define GEN_2

#include "utils.c"

#ifdef GEN_1
#include "compiler-gen1.c"
#endif

#ifdef GEN_2
#include "compiler-gen2.c"
#endif

op_array_t* do_compilation(char* file);
void do_interpret(op_array_t* program);

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
    op_array_t* program;

    program = compiler_pass1(file);

    return program;
}

void do_interpret(op_array_t* program)
{
    interpret_pass1(program);
}
