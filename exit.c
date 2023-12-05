#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include "headers.h"

void exitshell(char *args[])
{
	if (strcmp(args[0], "exit") == 0)
	{
		printf("Exiting shell..\n");
		exit(0);
	}
}
