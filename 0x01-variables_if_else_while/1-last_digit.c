#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - assign a random number to the variable n each time it is executed.
 *
 * Return: zero if no error
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of n is %d and is greather than 5/n", n);
	}
	else if (n == 0)
	{
		printf("Last  digit of n is %d n/", n);
	}
	else
	{
		printf("Last digit of n is %d and is less than 6 and not 0/n", n);
	}
	return (0);
}
