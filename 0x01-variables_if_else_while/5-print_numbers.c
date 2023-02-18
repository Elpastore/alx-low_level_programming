#include <stdio.h>
#include <ctype.h>

/**
 * main -is the entry  point
 *
 * Return: zero if no error
 */
int main(void)
{
	int n;

	n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}

