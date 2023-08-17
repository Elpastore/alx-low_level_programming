#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers -prints numbers
 * @separator: the string to be printed between numbers
 * @n:  the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int numb;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		numb = va_arg(args, const unsigned int);
		printf("%d", numb);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
