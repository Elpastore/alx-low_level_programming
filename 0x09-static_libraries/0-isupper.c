#include "main.h"
/**
 * _isupper -function that checks for uppercase character
 * @c: value to be checked
 * Return: 1 if checke
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}

