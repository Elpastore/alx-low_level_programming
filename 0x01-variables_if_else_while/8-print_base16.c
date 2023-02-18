#include <stdio.h>
#include <ctype.h>
/**
 * main -print all number in hexadecimal base in lowercase
 *
 * Return: zero if no error
 */

int main(void)
{
	char lt;
	int num;

	lt = 'a';
	num = 0;

	while (num < 10)
	{
		putchar (num + '0');
		num++;
	}
	while (lt <= 'f')
	{
		putchar (lt);
		lt++;
	}
	putchar ('\n');
	return (0);
}
