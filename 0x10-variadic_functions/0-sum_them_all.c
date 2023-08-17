#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its  parameters
 * @n: number of parameter
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int numb;
	int  sum = 0;

	va_list arg;

	va_start(arg, n);


	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		numb = va_arg(arg, const unsigned int);
		sum += numb;
	}
	va_end(arg);

	return (sum);
}
