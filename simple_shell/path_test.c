#include "shell.h"
#include <stdlib.h>
#include <string.h>

/**
 * prompt -function that allows to enter and execute a command
 * @av: array of arguments
 * @env: array of environment variables
 */
void prompt(char **av, char **env)
{
        char *command = NULL;
        size_t size = 0;
        ssize_t numb_char;
        char *args[MAX_ARGS];
        pid_t child_pid;
        int status;

        while (1) /* infinite loop */
        {
                printf("#cisfun$ ");
                numb_char = getline(&command, &size, stdin);
                if (numb_char == -1)
                {
                        free(command);
                        exit(EXIT_FAILURE);
                }
                command[strcspn(command, "\n")] = '\0'; /* remove newline character */
                parse_args(command, args);
                if (args[0] == NULL)
                        continue;
                if (find_command(args[0], env) == NULL)
                {
                        printf("%s: command not found\n", args[0]);
                        continue;
                }
                child_pid = fork();
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
                                perror("execve");
                                free(command);
                                exit(EXIT_FAILURE);
                        }
                }
                else
                        wait(&status);
        }
}

/**
 * parse_args - function that parse the command line into arguments
 * @command: command line to parse
 * @args: array to store the parsed arguments
 */
void parse_args(char *command, char **args)
{
        int i = 0;
        char *token;

        token = strtok(command, " ");
        while (token != NULL && i < MAX_ARGS - 1)
        {
                args[i] = token;
                token = strtok(NULL, " ");
                i++;
        }
        args[i] = NULL; /* set last argument to NULL */
}

/**
 * find_command - function that searches for the command in the PATH
 * @command: command to search for
 * @env: array of environment variables
 * Return: full path of the command if found, NULL otherwise
 */
char *find_command(char *command, char **env)
{
        char *path, *path_copy, *dir;
        char full_path[PATH_MAX];
        int i;

        for (i = 0; env[i] != NULL; i++)
        {
                if (strncmp(env[i], "PATH=", 5) == 0)
                {
                        path = env[i] + 5; /* get the value of the PATH variable */
                        break;
                }
        }
        path_copy = strdup(path); /* create a copy of the PATH variable */
        dir = strtok(path_copy, ":"); /* split the PATH into directories */
        while (dir != NULL)
        {
                snprintf(full_path, PATH_MAX, "%s/%s", dir, command);
                if (access(full_path, X_OK) == 0) /* check if the command exists */
                {
                        free(path_copy);
                        return strdup(full_path);
                }
                dir = strtok(NULL, ":");
        }
        free(path_copy);
        return NULL; /* command not found */
}
