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
 * binary_search - binary search algorithm
 * @array:  pointer to the first element of the array
 * @size: the number of elements in array
 * @value: value to search for
 * Return: the matched element or -1 if no match
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L, M, R;

	L = 0;
	R = size - 1;
	if (array == NULL || size <= 0)
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
