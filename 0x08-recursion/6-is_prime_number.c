#include "main.h"
/**
 * check_prime - check for prime number
 * @a: an interger
 * @n: the number
 * Return: 0 if n is prime number, otherwise 1;
 */
int check_prime(int a, int n)
{
	if (n % a == 0 && n != a)
	{
		return (0);
	}
	else if (n % a != 0 && n > a)
	{
	return (check_prime(a + 1, n));
	}
	else
		return (1);
}


/**
 * is_prime_number - function that check for prime number
 * @n: number to be checked
 * Return: 1 if match; 0 if not
 */
int is_prime_number(int n)
{
	int a = 2;

	if (n < 2)
		return (0);
	return (check_prime(a, n));
}
