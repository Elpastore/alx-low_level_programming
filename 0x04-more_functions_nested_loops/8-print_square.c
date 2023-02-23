#include "main.h"
/**
 * print_square -function that prints a square, followed by a new line.
 * @size: the size of the square
 */
void print_square(int size)
{
	int a;

	for (a = 0; a < size; a++)
	{
		int b;
		
		for (b = 0; b < (size -1); b++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
	if (a <= 0)
		_putchar('\n');
}
