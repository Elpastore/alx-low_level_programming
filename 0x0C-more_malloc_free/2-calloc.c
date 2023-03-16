#include "main.h"
#include <stdlib.h>
/**
 * _calloc -function that allocates memory for an array, using malloc.
 * @nmemb: number of element in the int array
 * @size: the total size of the int array
 * Return: the pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);

}
