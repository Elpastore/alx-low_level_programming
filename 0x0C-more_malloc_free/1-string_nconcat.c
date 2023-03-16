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
 * string_nconcat -function that concatenates two strings.
 * @s1: firsst string
 * @s2: seocond string
 * @n: number of byte to be allocated
 * Return: the result of concatenation or NULL is failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int j = 0;
	unsigned int i;


	if (s1 == NULL)
		s1 = "";

	ptr = (char *) malloc(sizeof(char) * (n + 1));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[j++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		ptr[j++] = s2[i];
	}
	ptr[j++] = '\0';

	return (ptr);
}
