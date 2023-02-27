#include "main.h"
#include <string.h>
/**
 * *_strcpy -copies the string pointed to by src including the null byte
 * @dest: string 1
 * @src: string 2
 * Return: *src
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (src);
}
