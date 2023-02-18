#include <stdio.h>
#include <ctype.h>

/**
 * main -all alphabet letter except q and e
 *
 * Return: zero if no error
 */
int main(void)
{
	char lt;

	lt = 'a';

	while (lt <= 'z')
	{
		if (lt != 'q' && lt != 'e')
		putchar (lt);
		lt++;
	}
	putchar ('\n');
	return (0);
}
