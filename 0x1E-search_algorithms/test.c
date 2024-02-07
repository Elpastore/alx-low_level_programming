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
 * recursive_binary - binary search algorithm using recursive
 * @array:  pointer to the first element of the array
 * @L: the lowest  element in array
 * @R: the highest element in array
 * @value: value to search for
 * Return: the matched element or -1 if no match
 */

int recursive_binary(int *array, size_t L, size_t R, int value)
{
	size_t M;

	if (array == NULL || R <= 0)
		return (-1);
	if (L <= R)
	{
		printf("Searching in array: ");
		print_array(array, L, R);
		M = L + (R - L) / 2;

		if (array[M] < value)

			return (recursive_binary(array, M + 1, R, value));
		else if (array[M] > value)
			return (recursive_binary(array, L, M - 1, value));
		if (array[M - 1] == value)
			return (recursive_binary(array, L, M, value));
		return ((int)M);
	}
	return (-1);
}
/**
 * advanced_binary - advanced_binary search algorithm
 * @array:  pointer to the first element of the array
 * @size: the number of elements in array
 * @value: value to search for
 * Return: the matched element or -1 if no match
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t L, R;

	L = 0;
	R = size - 1;
	if (array == NULL || size <= 0)
		return (-1);

	return (recursive_binary(array, L, R, value));
}
