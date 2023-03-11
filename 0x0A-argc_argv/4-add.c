#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main -the entry point of the program
 * @argc: the number of element
 * @argv: array content element
 * Return: zero if success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, len;
	char *num_str;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num_str = argv[i];
		len = strlen(num_str);
		for (j = 0; j < len; j++)
		{
			if (!isdigit(num_str[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(num_str);
	}
	printf("%d\n", sum);
	return (0);
}

