#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the previously allocated
 * @old_size: size of ptr
 * @new_size: size of new memory block
 * Return: the pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void *p;
	char *ptr_cpy, *p_cpy;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		return (p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_cpy = ptr;
	p = malloc(new_size);
	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}
	p_cpy = p;
	for (i = 0; i < new_size; i++)
	{
		p_cpy[i] = *ptr_cpy++;
	}
	free(ptr);
	return (p);
}
