#include "main.h"
/**
 * get_bit - function that sets the value of a bit to 1 at a given index.
 * @n: the number of bit
 * @index: the index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}


	return ((n & mask) ? 1 : 0);
}

