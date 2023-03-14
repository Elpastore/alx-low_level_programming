#include "main.h"
#include <stdlib.h>
/**
 * lenght_string -function that compute the lenght of a given string
 * @s: the given string
 * Return: the lenght of the string
 */

int lenght_string(char *s)
{
	int leng;

	for (leng = 0; s[leng] != '\0'; leng++)
	{
	}
	return (leng);
}
/**
 * _strdup -funtion that allocate memory for a duplicate string
 * @str: strung to be duplicate
 * Return:  a pointer or NULL if str is null
 */
char *_strdup(char *str)
{
	int str_lenght;
	int i;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	str_lenght = lenght_string(str) + 1;

	copy = (char *) malloc(sizeof(char) * str_lenght);

	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < str_lenght; i++)
	{
		copy[i] = str[i];
	}
	copy[str_lenght] = '\0';
	return (copy);
}
