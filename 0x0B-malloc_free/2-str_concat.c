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
 * str_concat -function that concatenates two strings.
 * @s1: firsst string
 * @s2: seocond string
 * Return: the result of concatenation or NULL is failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i;
	int j = 0;
	int len_s1, len_s2, len_ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = lenght_string(s1);
	len_s2 = lenght_string(s2);
	len_ptr = len_s1 + len_s2 + 1;

	ptr = (char *) malloc(sizeof(char) * len_ptr);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[j++] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		ptr[j++] = s2[i];
	}
	ptr[j++] = '\0';

	return (ptr);
}
