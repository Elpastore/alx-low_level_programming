#include "search_algos.h"
/**
 * print_array - function that print array
 * @array: pointer to the first elm of array
 * @L: the lowest value;
 * @R: the highest value
 */
void print_array(int *array, size_t L, size_t R)
{
	size_t i;

	for (i = L; i <= R; i++)
	{
		if (i != R)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
/**
 * Binary_search - binary search algorithm
 * @array:  pointer to the first element of the array
 * @L: the lowest element in array
 * @R: the highest element in array
 * @value: value to search for
 * Return: the matched element or -1 if no match
 */
int Binary_search(int *array, size_t L, size_t R, int value)
{
	size_t  M;

	if (array == NULL || R <= 0)
		return (-1);
	while (L <= R)
	{
		printf("Searching in array: ");
		print_array(array, L, R);
		M = L + (R - L) / 2;

		if (array[M] < value)
		{
			L = M + 1;
		}
		else if (array[M] > value)
			R = M - 1;
		else
			return ((int)M);
	}
	return (-1);
}
/**
 * min - find the minimum value
 * @a: value1
 * @b: value2
 * Return: the lowest value
 */
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

/**
 * exponential_search - Exponential search algorithm
 * @array:  pointer to the first element of the array
 * @size:  number of elements in array
 * @value: the value to search for
 * Return: the index of found element otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (array == NULL || size == 0)
		return (-1);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	/* index in which binary search will be  apply is [i/2, min(i, n - 1)]*/
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2,
			min(i, size - 1));
	return (Binary_search(array, i / 2, min(i, size - 1), value));
}
