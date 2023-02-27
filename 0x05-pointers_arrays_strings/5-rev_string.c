#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverse a string value
 *
 * @s: string to print
 */
void rev_string(char *s)
{
	int i;
	char j;

	for (i = 0; i < _strlen(s) / 2; i++)
	{
		j = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = j;
	}
}
