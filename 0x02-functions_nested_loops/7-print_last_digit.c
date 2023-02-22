#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit -function that prints the last digit of a number
 * @n: number
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	_putchar (_abs(n % 10) + '0');
	return (_abs(n % 10));
}
