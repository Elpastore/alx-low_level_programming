#include "3-calc.h"
#include <stdio.h>
/**
 * op_add -function that perform addition
 * @a: first integer
 * @b: second integer
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub -function that perform substraction
 * @a: first integer
 * @b: second integer
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul -function that perform multiplication
 * @a: first integer
 * @b: second integer
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -function that perform division
 * @a: first integer
 * @b: second integer
 * Return: the product of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod -function that perform modulo operation
 * @a: first integer
 * @b: second integer
 * Return: the remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
