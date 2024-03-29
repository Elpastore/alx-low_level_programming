#include "main.h"
/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index
 * Return: 1 if worked or -1 if an error occurred
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
