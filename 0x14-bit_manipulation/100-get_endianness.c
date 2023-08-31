#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 * Return: O if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int number = 1;
	unsigned char *check = (unsigned char *) &number;

	if (*check == 1)
		return (1);
	else
		return (0);
}
