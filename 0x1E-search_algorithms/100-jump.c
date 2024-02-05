#include "search_algos.h"
#include <math.h>
/**
 * min - find the minimum value
 * @a: value1
 * @b: value2
 * Return: the lowest value
 */
size_t min(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}
/**
 * jump_search -  searches for a value using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: the matched value otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m, prev, jump;

	if (array ==  NULL || size == 0)
		return (-1);
	prev = 0;
	jump = sqrt(size);
	m = jump;

	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	/*Let's find the intervall in which linear searche algo will be performed*/
	while (m < size && array[prev] < value)
	{
		if (array[m] >= value)
			break;
		prev += jump;
		m += jump;
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	}
	if (prev >= size || array[prev] > value)
		return (-1);
	printf("Value find in indexes [%ld] and [%ld]\n", prev, m);

	while (prev <= min(m, size - 1) && value >= array[prev])
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
