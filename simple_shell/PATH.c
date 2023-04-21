#include <shell.h>
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
