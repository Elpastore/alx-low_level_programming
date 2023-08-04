#include "main.h"
#include <stdio.h>
/**
 * main - the entry poin of the program
 * @argc: the number of element
 * @argv: array content element
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
