#include "main.h"
#include "2-strlen.c"
/**
 * puts_half -prints half of a string, followed by a new line.
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i;
	int j = 0;

	if (j % 2 != 0)
	{
		j = j + 1;
	}

	for (i = (_strlen(str) + j) / 2; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
