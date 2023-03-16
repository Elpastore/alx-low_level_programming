#include "main.h"
#include <stdlib.h>
/**
 * array_range -function that creates an array of integers.
 * @min: first element of the int array
 * @max: last element of the int array
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, j;
	int len_array = 0;

	for (i = min; i <= max; i++)
	{
		len_array++;
	}

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * len_array);
	if (ptr == NULL)
		return (NULL);
	j = 0;
	while (min <= max)
	{
		ptr[j] = min;
		j++;
		min++;
	}
	return (ptr);
}
