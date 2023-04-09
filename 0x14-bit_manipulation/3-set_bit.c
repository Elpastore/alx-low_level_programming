#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: int pointer
 * @index: index to set the value of bit
 *
 * Return: 1 if error, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	 unsigned long int mask = 1 << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= mask;

	return (1);
}

