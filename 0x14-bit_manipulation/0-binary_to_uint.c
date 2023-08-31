#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: array of string that contains binary form
 * Return: converted number or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int i;
	unsigned int len = 0;

	if (b == NULL)
		return (0);

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
		else if (b[i] != '0')
		{
			return (0);
		}
	}
	return (num);
}
