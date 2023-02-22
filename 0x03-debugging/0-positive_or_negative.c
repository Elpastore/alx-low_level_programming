#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -assign a random number to the variable n each time it is executed
 *
 * Return: 0, if no error
 */
int main(void)
{
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", );
	}
	return (0);
}
