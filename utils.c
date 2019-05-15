#include "utils.h"

op_array_t* array_init()
{
    op_array_t* array = malloc(sizeof(op_array_t));

    array->capacity = 16;
    array->length = 0;
    array->ops = calloc(16, sizeof(op_t));

    return array;
}

void array_add(op_array_t* array, op_t op)
{
    if (array->length == array->capacity) {
        int old_capacity = array->capacity;
        op_t* old_ops = array->ops;
        array->capacity *= 1.5;
        array->ops = calloc(array->capacity, sizeof(op_t));

        for (int i = 0; i < old_capacity; i++)
            array->ops[i] = old_ops[i];

        free(old_ops);
    }

    array->ops[array->length++] = op;
}

op_t array_get(op_array_t* array, int index)
{
    return array->ops[index];
}

void array_destroy(op_array_t* array)
{
    free(array->ops);
    free(array);
}

char* read_file(char* filename)
{
    FILE* f = fopen(filename, "rb");

    if (f) {
        fseek(f, 0, SEEK_END);

        long length = ftell(f);
        fseek(f, 0, SEEK_SET);

        char* buffer = calloc(length, sizeof(char));

        if (buffer)
            fread(buffer, 1, length, f);

        fclose(f);

        return buffer;
    }

    return NULL;
}

int find_op(char token)
{
    for (int i = 0; valid_ops[i] > 0; i++)
        if (valid_ops[i] == token)
            return i;

    return -1;
}