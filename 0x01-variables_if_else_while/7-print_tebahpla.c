#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the lower case of the alphabet
 *
 * Return: 0, if succesful
 */
int main(void)
{
	char lt;

	lt = 'z';

	while (lt >= 'a')
	{
		putchar(lt);
		lt--;
	}
	putchar('\n');
	return (0);
}
