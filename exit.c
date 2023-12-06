#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include "headers.h"
/**
 * exitshell - the function that will exit out of the shell
 * @args: amount of arguments
 *Return: -1 for exit, otherwise ERROR
 */
void exitshell(char *args[])
{
	if (strcmp(args[0], "exit") == 0)
	{
		printf("Exiting shell..\n");
		exit(0);
	}
}
