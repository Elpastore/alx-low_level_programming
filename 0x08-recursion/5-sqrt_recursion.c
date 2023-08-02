#include "main.h"

/**
 * checker - function that checker for natural square of a number
 * @a: the root to be checked
 * @b: the number
 * Return: the square of the number b
 */
int checker(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	else if (a * a > b)
	{
		return (-1);
	}
	return (checker(a + 1, b));
}


/**
 * _sqrt_recursion - function that returns the natural
 * @n: the number
 * Return: the natural square root of n; -1 if don't have
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
