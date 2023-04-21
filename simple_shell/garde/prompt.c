#include "shell.h"
#include <stdlib.h>
/**
 * prompt -function that allow to enter and execte a command
 * @av: string
 * @env: environnement
 */

void prompt(char **av, char **env)
{
	int i = 1, j;
	char *command = NULL;
	size_t size = 0;
	ssize_t numb_char;
	char *args[] = {NULL, NULL}; /*to store the command to be executed*/
	pid_t child_pid;
	int status;

	while (i == 1) /* To creat an infinite loop*/
	{
		printf("#cisfun$ ");

		numb_char =  getline(&command, &size, stdin);
		if (numb_char == -1)
		{
			free(command);
			exit(EXIT_FAILURE);
		}
		command[strcspn(command, "\n")] = '\0'; /* remove newline character*/
		/*args[0] = command;  to store the command in the firts element of array */
		j = 0;
		args[j] = strtok(command, " ");
		while (args[j] != NULL)
		{
			j++;
			args[j] = strtok(NULL, " ");
		}
		
		child_pid = fork(); /*create a child process */
		if (child_pid == -1)
		{
			perror("Error");
			free(command);
			exit(EXIT_FAILURE);
		}
		else if (child_pid == 0)
		{
			if (execve(args[0], args, env) == -1)
			{
				printf("%s: No such file or directory\n", av[0]);
				free(command);
				exit(EXIT_FAILURE);
			}
		}
		else
			wait(&status);
	}
}
