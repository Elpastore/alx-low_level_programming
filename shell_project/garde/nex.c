nclude "shell.h"
#include <stdlib.h>
#include <stdio.h>

/* Function to get a command line from the user */
char *get_command_line(void)
{
	char *command = NULL;
       	size_t size = 0;
	ssize_t numb_char;
	
	printf("#cisfun$ ");
	numb_char = getline(&command, &size, stdin);
	if (numb_char == -1)
	{
		free(command);
		exit(EXIT_FAILURE);
	}
	command[strcspn(command, "\n")] = '\0'; /* Remove newline character */
	return (command);
}

/* Function to parse a command line into an array of arguments */
char **parse_command_line(char *command_line)
{
	int i = 0;
	char **args = malloc(sizeof(char *) * MAX_ARGS);
	if (!args)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	args[i] = strtok(command_line, " ");
	while (args[i] != NULL && i < MAX_ARGS - 1)
	{
		i++;
		args[i] = strtok(NULL, " ");
	}
	return (args);
}
/* Function to execute a command with the given arguments */
void execute_command(char **args, char **env, char **av)
{
       	pid_t child_pid;
	int status;

