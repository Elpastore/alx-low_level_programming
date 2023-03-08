#inlcude "main.h"
/**
 * _strlen -give the lenght of s
 * @s: string
 * Return: the lenght of s
 */
int _strlen(char *s)
{
	int i, j
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	
	return (count);
}

/**
 * _print_rev_recursion - print in reverse
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	for (j = _strlen(s) - 1; j >= 0; j--)
	{
		_putchar(s[j]);
		_puts_recursion(s + 1);
	}
}
