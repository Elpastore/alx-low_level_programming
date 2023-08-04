#include "main.h"
#include <stdio.h>
/**
 * main - the entry poin of the program
 * @argc: the number of element
 * @argv: array content element
 * Return: 0 if success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int n  = argc - 1; /*to eliminate the first argument(argv[0]*/

	printf("%d\n", n);
	return (0);
}

