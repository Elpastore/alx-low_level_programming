#include "main.h"
/**
 * main - program that adds positive numbers.
 * @argc: number of arg
 * @argv: array of arg
 * Return: 0 if succes,
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char *num;

	for (i = 1; i < argc; i++)
	{
		num = argv[i];
		while (*num != '\0')
		{
			if (!isdigit(*num))
			{
				printf("Error\n");
				return (1);
			}
			num++;
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
