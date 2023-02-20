#include <stdio.h>
/**
 * main -print all possible combinations of two two-digit numbers.
 *
 * Return: zero if no error
 */
int main(void)
{
	int i = 0, j = 0;

	while (i < 100)
	{
		j = i;
		while (j < 100)
		{
			if (i != j)
			{
				putchar ((i / 10) + '0');
				putchar ((i % 10) + '0');
				putchar (' ');
				putchar ((j / 10) + '0');
				putchar ((j % 10) + '0');
				if (i != 98 || j != 99)
				{
					putchar (',');
					putchar (' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar ('\n');
	return (0);
}
