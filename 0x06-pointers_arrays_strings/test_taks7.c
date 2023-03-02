#include "main.h"
/**
 * leet -encodes a string into 1337.
 * @s: string to be encode
 * Return: s
 */
char *leet(char *s)
{
        int i = 0;
        char a[5] = "aeotl";
	char b[5] = "AEOTL";
        char c[5] = "43071";

        while (s[i] != '\0')
        {
                int j;

                for (j = 0; j < 5; j++)
                {
                        if (s[i] == a[j] || s[i] == b[j])
                        {
                                s[i] = c[j];
                        }
                }
                i++;
        }
        return (s);
}
