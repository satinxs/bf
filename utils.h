#include <stdio.h>
#include <stdlib.h>

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

typedef struct {
    int code;
    int ref;
} op_t;

typedef struct {
    op_t* ops;
    int length, capacity;
} op_array_t;

op_array_t* array_init();
void array_add(op_array_t* array, op_t op);
op_t array_get(op_array_t* array, int index);
void array_destroy(op_array_t* array);

char* read_file(char* filename);

const char valid_ops[] = "<>,.-+[]";

int find_op(char token);