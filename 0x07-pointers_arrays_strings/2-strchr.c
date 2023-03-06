#include "main.h"
#include <stddef.h>
/**
 * _strchr -unction that locates a character in a string
 * @s: string
 * @c: character
 * Return:first occurrence of c in s or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
