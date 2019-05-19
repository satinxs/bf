#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>

#define MEMORY_SIZE 30000

typedef enum {
    OP_SHIFT_LEFT,
    OP_SHIFT_RIGHT,
    OP_READ,
    OP_WRITE,
    OP_SUB,
    OP_ADD,
    OP_BRACKET_LEFT,
    OP_BRACKET_RIGHT,
    OP_CLEAR,
    OP_END
} op_type_t;

typedef struct {
    op_type_t code;
    int ref;
    // int calls;
} op_t;

typedef struct {
    op_t* ops;
    int length, capacity;
} op_array_t;

op_array_t* array_init();
void array_add(op_array_t* array, op_t op);
op_t array_get(op_array_t* array, int index);
void array_destroy(op_array_t* array);
op_array_t* array_copy(op_array_t* source);

char* read_file(char* filename);

int find_op(char token);

#define CGOTO

#endif