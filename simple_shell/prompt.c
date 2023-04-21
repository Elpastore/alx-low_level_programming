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

/**
 * parse_command_line - Function to parse a command line into an array
 *  @command_line: the command which be tape
 *  Return: the value of argument
 */
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
/**
 * execute_command -Function to execute a command with the given arguments
 * @args: array store argument
 * @env: the environnment
 * @av: string
 */
void execute_command(char **args, char **env, char **av)
{
	pid_t child_pid;
	int status;

	child_pid = fork(); /* create a chiild process */
	if (child_pid == -1)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		if (execve(args[0], args, env) == -1)
		{
			printf("%s: No such file or directory\n", av[0]);
			exit(EXIT_FAILURE);
		}
	}
	else
		wait(&status);
}
/**
 * prompt -Main function for the shell
 * @av: string
 * @env: environnement
 */
void prompt(char **av, char **env)
{
	char *command_line = NULL;
	char **args = NULL;

	while (1) /* To create an infinite loop */
	{
		command_line = get_command_line();
		args = parse_command_line(command_line);
		execute_command(args, env, av);
		free(command_line);
		free(args);
	}
}
