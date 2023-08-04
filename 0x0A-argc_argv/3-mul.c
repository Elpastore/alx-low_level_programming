#include "main.h"
/**
 * main -  program that multiplies two numbers.
 * @argc: number of arg
 * @argv: array of arg
 * Return: 0 if successfull,1 if nulber of arg less than 2
 */
int main(int argc, char *argv[])
{
	int numb1, numb2, result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	numb1 = atoi(argv[1]);
	numb2 = atoi(argv[2]);

	result = numb1 * numb2;

	printf("%d\n", result);

	return (0);
}
