#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -the entry point of the program
 * @argc: the number of element
 * @argv: array content element
 * Return: zero if success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
