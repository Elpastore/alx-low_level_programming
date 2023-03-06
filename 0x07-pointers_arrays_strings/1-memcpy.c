#include "main.h"
/**
 * _memcpy - that copies memory area.
 * @dest: char
 * @src: char to be copied
 * @n: number of byte
 * Return: dest if successfull
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i  < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
