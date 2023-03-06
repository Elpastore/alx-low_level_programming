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
	int i;

	char *p = needle;

	for (i = 0; *p != '\0'; i++)
	{
		if (haystack[i] == *p && *p != '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
