#include <stdio.h>
#include <ctype.h>

/**
 * main  -is the entry point
 *
 * Return: zero if no error
 */
int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		putchar (n + '0');
		(n++);
	}
	putchar ('\n');
	return (0);
}
