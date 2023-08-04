#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @num: number
 *
 * Return: zero if no error
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (num * -1);
	}
	else
	{
		return (num);
	}
}
