#include "main.h"
#include <string.h>
/**
 * print_rev -prints a string, in reverse, followed by a new line.
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
