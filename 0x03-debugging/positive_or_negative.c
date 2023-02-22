#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * positive_or_negative -give the signe of value
 * @i: value to test
 * Return: 0, if no error
 */
void positive_or_negative(int i)
{
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
		printf("%d is negative\n", i);
	}
}
