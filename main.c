#include <stdio.h>
#include <time.h>

#include "utils.c"

#define MEMORY_SIZE 1024

#define OP_SHIFT_LEFT 0
#define OP_SHIFT_RIGHT 1
#define OP_READ 2
#define OP_WRITE 3
#define OP_SUB 4
#define OP_ADD 5
#define OP_BRACKET_LEFT 6
#define OP_BRACKET_RIGHT 7
#define OP_END 8

//First pass
#include "compiler-1st-pass.c"

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
    return compiler_pass1(file);
}

void do_interpret(op_array_t* program)
{
    interpret_pass1(program);
}
