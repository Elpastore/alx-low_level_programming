#include <stdio.h>
#include "main.h"
/**
  * print_alphabet -print alphabet letter
 */
void print_alphabet(void)
{
	char lt;

	for (lt = 'a'; lt <= 'z'; lt++)
	{
		_putchar(lt);
	}
	_putchar('\n');
}
