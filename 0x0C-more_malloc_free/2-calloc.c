#include "main.h"
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of member
 * @size: the size of array
 * Return: an array's pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, array_len;
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array_len = nmemb * size;

	array = malloc(array_len);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < array_len; i++)
	{
		array[i] = 0;
	}
	return (array);
}
