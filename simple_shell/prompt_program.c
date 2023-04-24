#include "shell.h"

/**
 * get_command_line - Function to get a command line from the user
 * Return: the command entried
 */
char *get_command_line(void)
{
	char *command = NULL;
	size_t size = 0;
	ssize_t numb_char;
	if (isatty(STDIN_FILENO))
		printf("#cisfun$ ");
	numb_char = getline(&command, &size, stdin);
	if (numb_char == -1)
	{
		free(command);
		exit(EXIT_FAILURE);
	}
	if ((strcmp(command, "exit\n") == 0))
	{
		printf("Exiting shell ...\n");
		free(command);
		exit(EXIT_SUCCESS);
	}
	command[strcspn(command, "\n")] = '\0'; /* Remove newline character */
	return (command);
}
