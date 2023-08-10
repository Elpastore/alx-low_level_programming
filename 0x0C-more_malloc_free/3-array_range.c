#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: first value
 * @max: last value
 * Return: an array's pointer
 */
int *array_range(int min, int max)
{
	int *array;
	int a, b, size_array = 0;

	if (min > max)
	{
		return (NULL);
	}

	for (a = min; a <= max; a++)
	{
		size_array++;
	}
	array = malloc(size_array * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	b = 0;
	while (min <= max)
	{
		array[b] = min;
		b++;
		min++;
	}
	return (array);
}
