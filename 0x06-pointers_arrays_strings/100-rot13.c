#include "main.h"
/**
 * rot13 -function that encodes a string using rot13.
 * @s: string
 * Return: s if successfull
 */
char *rot13(char *s)
{
	int i;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		int j;

		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = ROT13[j];
				break;
			}
		}
	}
	return (s);
}
