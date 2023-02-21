#include "main.h"
/**
 * print_sign -unction that prints the sign of a number
 * @n: number
 *
 * Return: 1 if positif,0 if 0 and -1 otherwise
 */
int print_sign(int n)
{
	if (n >  0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
