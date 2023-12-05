#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include "headers.h"
/**
 * builtin: handling built in commands
 *
 * @args: arguments
 *
 */

void builtin(char *args[])
{
	DIR *dir; /*directory stream*/
	struct dirent *start; /*entry for directory structure*/
	int x = 0; /*counter*/

	if (args[1] == NULL)
	{
		/*lists files in current directory*/
		dir = opendir(".");
		if (dir == NULL)
			return;
		while ((start = readdir(dir)) != NULL)
		{
			/*prints all files in directory*/
			printf("%s\n", start->d_name);
		}

		closedir(dir);
	}
	else if (strcmp(args[1], "exit") == 0)
	{
		/*exit command*/
		printf("Exit shell..");
		exit(0);
	}
	else
	{
		/*prints given arg*/
		while (args[x] != NULL)
		{
			printf("%s ", args[x]);
			x++;
		}
		printf("\n");
	}
}
