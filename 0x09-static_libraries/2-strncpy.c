#include "main.h"
/**
 * _strncpy -function that copies a string.
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: dest if successfull
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len_src = 0;

	while (src[i++])
	{
		len_src++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = len_src; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
