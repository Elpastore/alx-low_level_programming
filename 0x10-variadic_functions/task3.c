#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_char -function that prints char
 * @args: argument
 */
void print_char(va_list args)
{
	char lt = va_arg(args, int);

	printf("%c", lt);
}
/**
 * print_int - function that prints int
 * @args: argument
 */
void print_int(va_list args)
{
	int num = va_arg(args, int);

	printf("%d", num);
}
/**
 * print_float -function that prints float/
 * @args: argument
 */
void print_float(va_list args)
{
	float num = va_arg(args, double);

	printf("%f", num);
}
/**
 * print_string - function that prints string
 * @args: argument
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - function that prints anything
 * @format: string that store the type of argument
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";

	print_el func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	int i, j;

	va_start(args, format);

	i = 0;

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(func[j].c)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			func[j].f(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
