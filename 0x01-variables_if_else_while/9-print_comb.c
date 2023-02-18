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

	while (i < 10)
	{
		putchar (i + '0');
		if (i != 9)
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar ('\n');
	return (0);
}
