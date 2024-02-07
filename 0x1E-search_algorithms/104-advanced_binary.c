#include "search_algos.h"
/**
 * print_array - function that print array
 * @array: pointer to the first elm of array
 * @size: the number of elements in array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	for (i = 0; i <= size - 1; i++)
	{
		if (i != size - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
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

	size_t mid;
	int r = -1;

	if (array == NULL || size <= 0)
		return (-1);

	mid = (size - 1) / 2;

	printf("Searching in array: ");
	print_array(array, size);

	if (array[mid] < value)
	{
		r = advanced_binary(array + (mid + 1), size - (mid + 1), value);
		if (r >= 0)
			r += mid + 1;

	}
	else if (array[mid] > value)
	{
		r = advanced_binary(array, mid + 1, value);
	}
	else if (mid == 0 || array[mid - 1] < array[mid])
		r = mid;
	else
		r = advanced_binary(array, mid + 1, value);

	return (r);

}
