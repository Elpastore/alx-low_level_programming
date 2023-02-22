#include "main.h"
/**
 * print_to_98 -prints all natural numbers from n to 98
 * @n: started number
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			_putchar(n + '0');
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			_putchar(n + '0');
			n--;
		}
	}
}
