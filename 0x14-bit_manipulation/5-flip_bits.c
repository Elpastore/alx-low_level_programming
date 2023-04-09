#include "main.h"
/**
 * flip_bits - calculates the number of bits to flip to get
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int num_bits = 0;

	while (result)
	{
		num_bits += result & 1;
		result >>= 1;
	}
	return (num_bits);
}

