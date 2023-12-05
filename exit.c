#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include "headers.h"

void exit_shell(void)
{
	if (strcmp(args[1], "exit") == 0)
	{
		printf("Exiting shell..\n");
		exit(0);
	}
}
