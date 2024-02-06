#include "search_algos.h"
/**
 * interpolation_search -  Interpolation search algorithm
 * @array:pointer to the first element of the array
 * @size:  the number of elements in array
 * @value: the value to search for
 * Return: the index of the element if find otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	low = 0;
	high = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		if (pos >= size || pos < low)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

	}

	return (-1);
}
