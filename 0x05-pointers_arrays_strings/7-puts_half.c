#include "main.h"
#include "2-strlen.c"
/**
 * puts_half -prints half of a string, followed by a new line.
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i;

	for (i = _strlen(str) / 2; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
