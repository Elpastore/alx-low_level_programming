#include "main.h"
/**
 * _strlen_recursion - funnction that return the lenght of a string
 * @s: a pointer to a string
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
