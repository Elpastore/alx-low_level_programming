#include "shell.h"
/**
 * parse_command_line - Function to parse a command line into an array
 *  @command_line: the command which be tape
 *  Return: the value of argument
 */
char **parse_command_line(char *command_line, char **env)
{
	int i = 0;
	char **envp = env;
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

	if(strcmp(args[0], "env") == 0) /* Handle env command */
	{
		while (*envp != NULL)
		{
			printf("%s\n", *envp);
			envp++;
		}
	}

}
