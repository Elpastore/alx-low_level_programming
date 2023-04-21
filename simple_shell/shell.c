#include "shell.h"

/**
 * main -the entry point of the programm
 * @ac: number of arguments
 * @av: an array where argument are stored
 * @env: the environnement
 * Return: 0 if success
 */

int main(int ac, char **av, char **env)
{
	if (ac == 1)
		prompt(av, env);
	return (0);
}
