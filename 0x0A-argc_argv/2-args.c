#include "main.h"
/**
 * main - program that prints all arg it receives
 * @argc: number of arg
 * @argv: array of arg
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
