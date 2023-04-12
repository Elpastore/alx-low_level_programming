#include "main.h"
/**
 *  read_textfile - function that reads a text file and prints it
 *  @filename: the pointer to the file
 *  @letters: the number of letters it should read and print
 * Return: the actual number of letters, 0 if file can not be opened
 * or NULL or if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;

	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);
	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (fd == -1 || rd == -1 || wr != rd)
	{
		return (0);
	}
	free(buffer);
	close(fd);
	return (wr);
}
