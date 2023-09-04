#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @text_content: data to be appended
 * @filename: file's name
 * Return: 1 if success otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_open, fd_write;
	int len;

	if (filename == NULL)
		return (-1);

	fd_open = open(filename, O_WRONLY | O_APPEND);
	if (fd_open == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
		fd_write = write(fd_open, text_content, len);
		if (fd_write == -1)
			return (-1);
	}
	close(fd_open);
	return (1);
}
