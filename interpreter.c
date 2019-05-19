#include "utils.h"
#include <stdint.h>

#define _ADD() memory[mp] += op.ref
#define _SUB() memory[mp] -= op.ref
#define _SHIFT_LEFT() mp -= op.ref
#define _SHIFT_RIGHT() mp += op.ref
#define _CLEAR() memory[mp] = 0

#define _BRACKET_LEFT()    \
    if (memory[mp] == 0) { \
        ip = op.ref;       \
    }

#define _BRACKET_RIGHT()   \
    if (memory[mp] != 0) { \
        ip = op.ref;       \
    }
// program->ops[ip].calls++;

#ifndef CGOTO
void interpret(op_array_t* program)
{
    uint8_t* memory = calloc(MEMORY_SIZE, sizeof(uint8_t));

    int ip = 0, //Instruction pointer
        mp = 0; //Memory pointer

    while (ip < program->length) {
        op_t op = array_get(program, ip);

        switch (op.code) {
        case OP_SHIFT_LEFT:
            _SHIFT_LEFT();
            break;

        case OP_SHIFT_RIGHT:
            _SHIFT_RIGHT();
            break;

        case OP_ADD:
            _ADD();
            break;

        case OP_SUB:
            _SUB();
            break;

        case OP_WRITE:
            putchar(memory[mp]);
            break;

        case OP_READ:
            memory[mp] = getchar();
            break;

        case OP_BRACKET_LEFT:
            _BRACKET_LEFT();
            break;

        case OP_BRACKET_RIGHT:
            _BRACKET_RIGHT();
            break;

        case OP_CLEAR:
            _CLEAR();
            break;
        case OP_END:
            return;

        default:
            printf("Unknown instruction %x at %d.\n", op.code, ip);
            exit(-1);
        }
        ip++;
    }
}
#else
void interpret(op_array_t* program)
{
    uint8_t* memory = calloc(MEMORY_SIZE, sizeof(uint8_t));

    int ip = 0; //Instruction pointer
    int mp = 0; //Memory pointer

    void* jump_table[] = {
        &&P_SHIFT_LEFT, &&P_SHIFT_RIGHT,
        &&P_READ, &&P_WRITE,
        &&P_SUB, &&P_ADD,
        &&P_BRACKET_LEFT, &&P_BRACKET_RIGHT,
        &&P_CLEAR,
        &&P_END
    };

    while (1) {
        op_t op = array_get(program, ip);

        goto* jump_table[op.code];

#define DISPATCH()                 \
    op = array_get(program, ++ip); \
    goto* jump_table[op.code]

    P_SHIFT_LEFT:
        _SHIFT_LEFT();
        DISPATCH();

    P_SHIFT_RIGHT:
        _SHIFT_RIGHT();
        DISPATCH();

    P_ADD:
        _ADD();
        DISPATCH();

    P_SUB:
        _SUB();
        DISPATCH();

    P_WRITE:
        putchar(memory[mp]);
        DISPATCH();

    P_READ:
        memory[mp] = getchar();
        DISPATCH();

    P_BRACKET_LEFT:
        _BRACKET_LEFT();
        DISPATCH();

    P_BRACKET_RIGHT:
        _BRACKET_RIGHT();
        DISPATCH();

    P_CLEAR:
        _CLEAR();
        DISPATCH();

    P_END:
        break;
    }

#undef DISPATCH
}
#endif