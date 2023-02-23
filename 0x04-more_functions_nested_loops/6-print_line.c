#include "main.h"
/**
 * print_line -function that draws a straight line in the terminal.
 * @n: number of times
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		i++;
	}
	_putchar('\n');
}
