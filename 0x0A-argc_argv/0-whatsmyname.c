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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
