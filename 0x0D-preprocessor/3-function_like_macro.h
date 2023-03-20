#ifndef _3_function_like_macro_h
#define _3_function_like_macro_h
/*
 * File: 3-function_like_macro.h
 * Desc: Header file that defines a function-like macro ABS(x)
 *       that computes the absolute value of a number x.
 *	 Header file guarded to avoid the problem of double inclusion.
 */

#define ABS(x) ((x < 0) ? (-1 * x) : (x))
#endif
