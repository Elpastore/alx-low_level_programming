#include "main.h"
/**
 * _strlen - function that gives the lenght of a string
 * @s: the string
 * Return: the lenght
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{

	}
	return (len);
}
/**
 * _strdup - duplicate a string and allocate the same memory
 * @str: string to be duplicated
 * Return: a pointer
 */
char *_strdup(char *str)
{
	char *p;
	int len_str = _strlen(str) + 1;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	p = malloc(sizeof(char) * len_str);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i =  0; i < len_str; i++)
	{
		p[i] = str[i];
	}
	p[len_str] = '\0';

	return (p);
}
