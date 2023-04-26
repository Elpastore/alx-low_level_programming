#include "shell.h"

#define MAX_COMMAND_LENGTH 256
#define MAX_ARGUMENTS 10

// Split the PATH environment variable into directories
char** split_path() {
    char* path = getenv("PATH");
    char** directories = malloc(MAX_ARGUMENTS * sizeof(char*));
    int i = 0;
    char* directory = strtok(path, ":");
    while (directory != NULL && i < MAX_ARGUMENTS) {
        directories[i++] = directory;
        directory = strtok(NULL, ":");
    }
    directories[i] = NULL;
    return directories;
}

// Check if the executable file exists in one of the directories in PATH
char* find_executable(char* command, char** directories) {
    char* executable_path = malloc(MAX_COMMAND_LENGTH * sizeof(char));
    int i = 0;
    while (directories[i] != NULL) {
        snprintf(executable_path, MAX_COMMAND_LENGTH, "%s/%s", directories[i], command);
        if (access(executable_path, F_OK) == 0) {
            return executable_path;
        }
        i++;
    }
    free(executable_path);
    return NULL;
}

int main() {
    char* line = NULL;
    size_t line_size = 0;

    char** directories = split_path();

    while (1) {
        // Display prompt and read user input
        printf(">> ");
        ssize_t line_length = getline(&line, &line_size, stdin);

        // Exit if user enters "exit" command
        if (strcmp(line, "exit\n") == 0) {
            printf("Exiting shell...\n");
            free(line);
            free(directories);
            exit(EXIT_SUCCESS);
        }

        // Parse command and arguments
        char* command = strtok(line, " \n");
        char* arguments[MAX_ARGUMENTS];
        int i = 0;
        while (command != NULL && i < MAX_ARGUMENTS - 1) {
            arguments[i++] = command;
            command = strtok(NULL, " \n");
        }
        arguments[i] = NULL;

        // Find the executable file in PATH
        char* executable_path = find_executable(arguments[0], directories);
        if (executable_path == NULL) {
            printf("%s: command not found\n", arguments[0]);
            continue;
        }

        // Fork a child process to execute the command
        pid_t pid = fork();
        if (pid == -1) {
            perror("fork failed");
            free(line);
            free(directories);
            free(executable_path);
            exit(EXIT_FAILURE);
        } else if (pid == 0) {
            // Child process: execute the command
            if (execv(executable_path, arguments) == -1) {
                perror("exec failed");
                free(line);
                free(directories);
                free(executable_path);
                exit(EXIT_FAILURE);
            }
        } else {
            // Parent process: wait for child to complete
            int status;
            waitpid(pid, &status, 0);

            // Display prompt again
            printf("\n");
        }

        free(executable_path);
    }

    free(directories);
    return 0;
}

