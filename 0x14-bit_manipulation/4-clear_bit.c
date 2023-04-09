#include "main.h"
/**
 * clear_bit -function that sets the value of a bit to 0 at a given index.
 * @n: pointer to bit number to set
 * @index: index at which to set bit value
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= mask;
	return (1);
}

