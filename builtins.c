#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include "headers.h"
/**
 * builtin: checking
 *
 * @args: arguments 
 *
 */

void builtin(char *args[])
{
	DIR *dir = opendir(".");
	struct dirent *start;
	int x;

	if (args[1] == NULL)
	{
		if (dir == NULL)
			return;
		while((start = readdir(dir)) != NULL)
		{
			printf("%s", start->d_name);
		}

		closedir(dir);
	}
	else if (strcmp(args[1], "exit") == 0)
	{
		printf("Exit shell..");
		exit(0);
	}
	else
	{
		while (args[x] != NULL)
		{
			printf("%s", args[x]);
			x++;
		}
	}
}
