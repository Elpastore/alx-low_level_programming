#include "function_pointers.h"
/**
 * array_iterator - perform action on array's element  using fucntion pointer.
 * @array: a int array
 * @size: size of array
 * @action: a pointer to the function you need use
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
