#ifndef __OP_QUAD__
#define __OP_QUAD__

namespace jit {

enum OP_QUAD {
	PLUS, SUB, MUL, DIV, REM, IINC,
	ASSIGN,MOV_FROM_ADDR, MOV_TO_ADDR,
	GET_ARRAY_POS, SET_ARRAY_POS, ARRAY_LEN, NEW_ARRAY,
	GOTO, JGE, JLE, JG, JNE,
	OP_RETURN,
	PUSH_ARG, CALL_STATIC, PLAIN_CALL,
	GET_STATIC_FIELD_ADDR
};

}

#endif
