#include <stdio.h>
/**
 * main -prints all possible combinations of two two-digit numbers
 *
 * Return: zero if no error
 */
int main(void)
{
	int a, b, c, d;

	a = 0;

	while (a < 10)
	{
		b = 0;
		while (b < 9)
		{
			c = 0;
			while (c < 10)
			{
				d = 0;
				while (d < 10)
				{
					putchar (a + '0');
					putchar (b + '0');
					if (b < 9)
					{
						putchar (' ');
					}
					putchar (c + '0');
					putchar (d + '0');
					if (c < 10)
					{
						putchar (',');
						putchar (' ');
					}
					d++;
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
