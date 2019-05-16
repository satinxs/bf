#include "utils.h"

op_array_t* compiler_pass1(char* source);

#ifdef JUMP_PRECALC
op_array_t* compiler_jump_precalc(op_array_t* source);
#endif

#ifdef OP_RUN_LENGTH
op_array_t* compiler_op_run_length(op_array_t* source);
#endif