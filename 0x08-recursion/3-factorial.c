#include "main.h"
/**
 * factorial - function that returns the !n
 * @n: the number
 * Return: the factoriel
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

	return (n * factorial(n - 1));
}
