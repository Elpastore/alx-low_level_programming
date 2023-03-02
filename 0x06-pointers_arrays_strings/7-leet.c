#include "main.h"
/**
 * leet -encodes a string into 1337.
 * @s: string to be encode
 * Return: s
 */
char *leet(char *s)
{
	int i = 0;
	char a[] = "aAeEoOtTlL";
	char b[5] = "43071";

	while (s[i] != '\0')
	{
		int j;

		for (j = 0; a[j] != 0; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j /2];
			}
		}
		i++;
	}
	return (s);
}
