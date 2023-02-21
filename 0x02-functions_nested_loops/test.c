#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 -print alphabet
 * print_alphabet -print alphabet letters
 */
void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 11)
	{
		print_alphabet();
		_putchar('\n');
		a++;
	}
}
