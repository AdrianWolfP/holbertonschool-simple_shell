#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

/**
 * printenv - Print the enviornment from the command line
 *
 * Return: printed out list of the path
 */
void printenv(void)
{
	char **environ;
	char **env = environ;

	while (*env != NULL)
	{
		printf("%s\n", *env);
		env++;
	}
}
