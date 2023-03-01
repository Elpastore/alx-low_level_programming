#include "main.h"
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

	i = 0;
	len_dest = 0;

	while (dest[i++])
	{
		len_dest++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len_dest++] = src[i];
	}
	dest[len_dest++] = '\0';
	return (dest);
}
