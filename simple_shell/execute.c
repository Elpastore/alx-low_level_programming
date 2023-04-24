#include "shell.c"
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
