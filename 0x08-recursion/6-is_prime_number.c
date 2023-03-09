#include "main.h"
/**
 * checker - check out the primers
 * @i:  int
 * @n: integer to be tested
 * Return: value
 */
int checker(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (checker(i + 1, n));
	return (1);
}
/**
 * is_prime_number - function that check if n is a primer
 * @n: integer to compare
 * Return: the primer
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (checker(i, n));
}
