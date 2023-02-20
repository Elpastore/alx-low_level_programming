#include <stdio.h>
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
		j = i + 1;
		while (j < 10)
		{
			putchar (i + '0');
			putchar (j + '0');
			if (i < 8)
			{
			putchar(',');
			putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar ('\n');
	return (0);
}
