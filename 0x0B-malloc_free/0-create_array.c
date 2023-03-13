#include <stdlib.h>
#include "main.h"
/**
 * create_array -function that creates an array of chars
 * @size: size of char
 * @c: string to be created
 * Return: the string
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size ; i++)
	{
		s[i] = c;
	}
	return (s);
}
