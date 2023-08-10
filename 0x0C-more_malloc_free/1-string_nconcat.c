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
 * string_nconcat - concatenates two strings
 * @s1: frist string
 * @s2: second string
 * @n: the first n bytes of s2 to concatenate
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int  i, len_s1, len_ptr;
	int len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = _strlen(s1);
	len_ptr = len_s1 + n + 1;

	ptr = malloc(len_ptr);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[len++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		ptr[len++] = s2[i];
	}
	ptr[len++] = '\0';

	return (ptr);
}
