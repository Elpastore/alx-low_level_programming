#include "main.h"
#include <string.h>
/**
 * create_file - function that creates a file.
 * @filename :  file to be created
 * @text_content: the content of the file
 * Return: 1 if successful otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fp, w, len;

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (filename == NULL)
	{
		return (-1);
	}
	if (fp == -1)
	{
		return (-1);
	}
	len = strlen(text_content);
	w = write(fp, text_content, len);
	if (w == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
