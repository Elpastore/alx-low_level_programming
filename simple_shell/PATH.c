#include "shell.h"
void execute_command(char **args, char **env)
{
    char *path = getenv("PATH");
    char *dir, *command;
    int found = 0;
    struct stat st;

    while ((dir = strtok(path, ":")))
    {
        path = NULL; // reset strtok
        command = malloc(strlen(dir) + strlen(args[0]) + 2); // +2 for '/' and null terminator
        sprintf(command, "%s/%s", dir, args[0]);
        if (access(command, X_OK) == 0)
        {
            found = 1;
            pid_t pid = fork();
            if (pid == -1)
            {
                perror("fork");
                exit(EXIT_FAILURE);
            }
            else if (pid == 0)
            {
                if (execve(command, args, env) == -1)
                {
                    perror("execve");
                    exit(EXIT_FAILURE);
                }
            }
            else
            {
                wait(NULL);
            }
            break; // stop searching
        }
        free(command);
    }
    if (!found)
    {
        printf("%s: command not found\n", args[0]);
    }
}
