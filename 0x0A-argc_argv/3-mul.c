#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -the entry point of the program
 * @argc: the number of element
 * @argv: array content element
 * Return: zero if success
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	mult = arg1 * arg2;
	printf("%d\n", mult);
	return (0);
}
