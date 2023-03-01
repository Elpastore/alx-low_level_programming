#include "main.h"
#include "_putchar.c"
#include <string.h>
/**
 * _strcat -function that concatenates two strings.
 * @dest: first string
 * @src: second string
 * Return: dest if successful
 */
char *_strcat(char *dest, char *src)
{
	size_t i, len_dest;

	len_dest = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len_dest + i] = src[i];
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
