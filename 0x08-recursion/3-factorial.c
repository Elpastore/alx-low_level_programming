#include "main.h"
/**
 * factorial -function that returns the factorial of a given number.
 * @n: number
 * Return: !n if success, -1 error
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
