#include <stdio.h>
#include <ctype.h>

/**
 *main -alphabet in lowercase, and then in uppercase
 *
 *Return: zero if no error
 */
int main(void)
{
	char lt, Lt;

	lt = 'a';
	Lt = 'A';

	while (lt <= 'z')
	{
		putchar (lt);
		lt++;
	}
	while (Lt <= 'Z')
	{
		putchar (Lt);
		Lt++;
	}
	putchar ('\n');
	return (0);
}
