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
/**
 * get_location - function that get the path for the given command
 * @command: command to be passed
 * Return: sting ?
 */
char *get_location(char *command)
{
	char *path, *path_copy, *path_token, *file_path;
	int command_length, directory_length;
	struct stat buffers;
	
	path = getenv("PATH");
	
	if(path)
	{
		path_copy = strdup(path);
		command_length = strlen(command);
		path_token = strtok(path_copy, ":");

		while(path_token != NULL)
		{
			 directory_length = strlen(path_token);
			 file_path = malloc(command_length + directory_length + 2);
			 strcpy(file_path, path_token);
			 strcat(file_path, "/");
			 strcat(file_path, command);
			 strcat(file_path, "\0");

			 if (stat(file_path, &buffers) == 0)
			 {
				 free(path_copy);
				 return (file_path);
			 }
			 else
			 {
				 free(file_path);
				 path_token = strtok(NULL, ":");
			 }
		}
		free(path_copy);
		if (stat(command, &buffers) == 0)
		{
			return (command);
		}
		return (NULL);
	}
	return (NULL);	
}

/**
 * execute_command -Function to execute a command with the given arguments
 * @args: array store argument
 * @env: the environnment
 * @av: string
 */
void execute_command(char **args, char **env, char **av)
{

	char *actual_command = NULL;
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
		actual_command = get_location(args[0]);
		if (execve(actual_command, args, env) == -1)
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

	while (1) /* To create an infinite loop using while loop and 1 to enter in infinite */
	{
		command_line = get_command_line();
		args = parse_command_line(command_line, env);
		execute_command(args, env, av);
		free(command_line);
		free(args);
	}
}
