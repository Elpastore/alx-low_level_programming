#include "shell.h"
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
