#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -function that allocates memory using malloc.
 * @b: number of byte to be allocated
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
