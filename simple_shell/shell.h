#ifndef shell_h
#define shell_h

#define  MAX_ARGS 10

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

void prompt(char **av, char **env);

#endif
