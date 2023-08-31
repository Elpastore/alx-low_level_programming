#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number one
 * @m: number two
 * Return: the number of bits flidded
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int num = 0;

	while (result)
	{
		num += result & 1;
		result >>= 1;
	}
	return (num);
}
