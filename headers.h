#ifndef HEADER_
#define HEADER_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void);

extern char **environ;

void comandex(char *arg[]);

char *get_path(char *command);

void exitshell(void);

void token(char *args[]);

void printenv(void);

#endif
