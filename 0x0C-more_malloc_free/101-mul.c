#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * is_valid_number -function that check for digit number
 * @str: array's pointer that content numbber to be  checked
 * Return: 1 if str is valid otherwise 0.
 */
int is_valid_number(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * main -program that multiplies tow positif numbers.
 * @argc: number of argument
 * @argv: array that content argument
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	unsigned long num1, num2, mul;

	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);

	mul = num1 * num2;
	printf("%lu\n", mul);
	return (0);
}
