#include "main.h"
/**
 * get_bit -returns the value of a bit at a given index.
 * @n: the number
 * @index: the index
 * Return: the value of the bit at index or -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1 << index;
	unsigned int result = (n & mask) ? 1 : 0;

	/*check if index is withing the valide range of bit*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return (result);
}
