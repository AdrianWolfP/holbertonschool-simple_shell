#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

void printenv(void)
{
	extern char **environ;
	char **env = environ;

	while (*env != NULL)
	{
		printf("%s\n", *env);
		env++;
	}
}
