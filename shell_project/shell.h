#ifndef shell_h
#define shell_h

#define  MAX_ARGS 10
#define PATH_MAX 10

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/stat.h>

void prompt(char **av, char **env);

#endif
