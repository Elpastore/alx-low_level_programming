#include "main.h"
/**
 * print_triangle -function that prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int a, b;

	a = 0;
	while (a <= size)
	{
		for (b = 0; b <= size; b++)
		{
			_putchar(' ');
		}
		b = 0;
		while (b < a)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
