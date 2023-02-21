#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	char ltx10;

	for (i = 0; i < 10; i++)
	{
		for (ltx10 = 'a'; ltx10 <= 'z'; ltx10++)
			{
				_putchar (ltx10);
				if (ltx10 == 'z')
					_putchar ('\n');
			}
	}
	putchar('\n');
}

