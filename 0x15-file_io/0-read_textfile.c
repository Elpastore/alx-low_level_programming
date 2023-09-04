#include "main.h"
/**
 * read_textfile - reads text file and prints it to the POSIX standard output.
 * @filename: the name of the file
 * @letters: number of letter in the file
 * Return: the number of letter
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd_open, fd_read, fd_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd_open = open(filename, O_RDONLY);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	fd_read = read(fd_open, buffer, letters);
	fd_write = write(1, buffer, fd_read);

	if (fd_open == -1 || fd_read == -1 || fd_write == -1)
	{
		return (0);
	}
	free(buffer);
	close(fd_open);

	return (fd_read);

}
