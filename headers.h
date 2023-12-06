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

void comandex(char *args[], char *command);

char *get_path(char *command);

void token(char *args[]);

void builtins(char *buffer);

#endif
