#include <stdio.h>
#include "_putchar.h"
/**
 * main -is the entry point
 * _putchar -print character
 *
 * Return: zero  iif no  error
 */

int main(void)
{
	char lt;

	for (lt = 'a'; lt <= 'z'; lt++)
	{
		_putchar(lt);
	}
	_putchar('\n');
	return (0);
}
