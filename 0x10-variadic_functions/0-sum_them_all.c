#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all -function that returns the sum of all its parameters.
 * @n:number of parameter
 * Return: the sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, const unsigned int);
	}
	va_end(args);
	return (sum);
}
