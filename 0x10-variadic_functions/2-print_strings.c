#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings -prints numbers
 * @separator: the string to be printed between numbers
 * @n:  the number of integers passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strings;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		strings = va_arg(args, char*);
		if (strings != NULL)
			printf("%s", strings);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
