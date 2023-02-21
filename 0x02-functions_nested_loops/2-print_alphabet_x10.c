#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ltx10;

	while (i < 10)
	{
		for (ltx10 = 'a'; ltx10 <= 'z'; ltx10++)
		{
			_putchar (ltx10);
		}
		_putchar ('\n');
		i++;
	}
}

