#include "search_algos.h"
/**
 * linear_search - searching a value using the Linear search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index of the matched value or -1 if no match
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
		for (i = 0 ; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	return (-1);
}
