#include <stdio.h>
/**
 * main -prints all possible different combinations of three digits
 *
 * Return: zero if no error
 */
int main(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c < 10)
			{
				putchar (a + '0');
				putchar (b + '0');
				putchar (c + '0');
				if (a < 7)
				{
					putchar (',');
					putchar (' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar ('\n');
	return (0);
}
