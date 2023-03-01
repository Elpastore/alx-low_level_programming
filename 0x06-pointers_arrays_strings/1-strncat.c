#include "main.h"
#include <string.h>
#include "_putchar.c"
/**
 * _strncat -function that concatenates two strings.
 *
 * @dest: first string
 * @src: second string
 * @n: numbber of bytes
 *
 * Return: dest if successful
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len_dest;

	len_dest = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len_dest + i] = src[i];
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
