#include "main.h"
/**
 * append_text_to_file- function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the content of the file text
 * Return: 1 if success otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, w, len;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
		w = write(fp, text_content, len);
		if (w == -1)
		{
			return (-1);
		}
	}
	if (fp == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
