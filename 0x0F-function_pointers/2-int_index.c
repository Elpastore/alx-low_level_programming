#include "function_pointers.h"
/**
 * int_index -function that searches for an integer.
 * @array: an int array
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 * Return: 0 if match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}
	return (-1);
}
