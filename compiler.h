#include "utils.h"

op_array_t* compiler_pass1(char* source);

op_array_t* compiler_jump_precalc(op_array_t* source);

op_array_t* compiler_op_run_length(op_array_t* source);

op_array_t* compiler_find_common_loops(op_array_t* source);