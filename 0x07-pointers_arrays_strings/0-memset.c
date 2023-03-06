#include "main.h"
/**
 * _memset -fills memory with a constant byte.
 * @s: character
 * @b: constant byte
 * @n: bytes of the memory area
 *
 * Return: s if successfull
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	char value = b;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		p[i] = value;
	}
	return (s);
}
