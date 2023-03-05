#include <stdio.h>
/**
 * main -all possible combinations of single-digit numbers.
 *
 * Return: zero if no error
 */
int main(void)
{
	
	int i;
	int j;
	int a;
	int b;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while(b < 10)
		{
			i = 0;
			while (i < 10)
			{
				j = i + 1;
				while (j < 10)
				{
					putchar (a + '0');
					putchar (b + '0');
					if (b < 9)
					{
						putchar(' ');
					}
					putchar (i + '0');
					putchar (j + '0');
					if (j < 10)
					{
						putchar(',');
						putchar(' ');
					}
					j++;
				}
				i++;
			}
			b++;
		}
		a++;
	}
	putchar ('\n');
	return (0);
}
