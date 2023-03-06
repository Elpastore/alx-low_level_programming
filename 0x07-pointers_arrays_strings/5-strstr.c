#include "main.h"
#include <stddef.h>
/**
 * _strstr -function that locates a substring.
 * @haystack: first string
 * @needle: second string
 * Return:  a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	for (; *haystack != '\0'; haystack++)
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}

