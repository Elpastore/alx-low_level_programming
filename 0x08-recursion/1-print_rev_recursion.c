#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse, followed by a new line.
 * @s: string to be printed using recursion way
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
