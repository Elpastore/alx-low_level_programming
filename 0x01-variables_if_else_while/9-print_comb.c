#include <stdio.h>
#include <ctype.h>
/**
 * main -all possible combinations of single-digit numbers.
 *
 * Return: zero if no error
 */
int main(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			putchar (i + '0');
			putchar (j + '0');
			if (i != 9 || j != 9)
			{
				putchar(',');
				putchar(' ');
				j++;
			}
		}
		i++;
	}

	return (0);
}

