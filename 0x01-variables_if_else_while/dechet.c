#include <stdio.h>
#include <ctype.h>
/**
 *main -the alphabet in lowercase
 *
 *Description: 'This program allow to print alphabet'
 *
 *@letter: alphabetic letter in lower case
 *
 *Return: zero if no error
 */
int main(void)
{
	char letter;
	
	letter = "a";
	
	while (letter = "a" ; letter <= "z")
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
