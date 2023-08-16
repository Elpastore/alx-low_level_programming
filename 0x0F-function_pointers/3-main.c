#include "3-calc.h"
/**
 * main -the entry point of the program
 * @argc: number of argument passed
 * @argv: array of char that store argument
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}


	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2]; /*this is the specific operator*/

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((num2 == 0 && *op == '*') || (num2 == 0 && *op == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(op)(num1, num2);
	printf("%d\n", result);
	return (0);
}
