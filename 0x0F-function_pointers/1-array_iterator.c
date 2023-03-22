#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -function print  array using function pointer.
 * @array: the array
 * @size: size of array
 * @action: a pointer point to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
