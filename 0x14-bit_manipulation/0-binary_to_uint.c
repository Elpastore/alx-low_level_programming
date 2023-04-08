#include "main.h"
/**
 * binary_to_uint - function  converts a binary number to decimal.
 * @b: char pointer contain the the binary form
 * Return: the converted number or 0 if
 *  -there is one or more chars in the string b that is not 0 or 1
 *  -b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0;
	unsigned int num = 0;
	unsigned int i;

	while (b[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
		{
			num += 1 << (len - i - 1);
		}
		else if (b[i] != '0' || b == NULL)
		{
			return (0);
		}
	}
	return (num);
}
