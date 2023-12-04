#include <stdio.h>
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

	if (args[] == NULL)
	{
		if (dir == NULL)
			return;
		while((start = readdir(dir)) = != NULL)
		{
			printf("%s", start);
		}

		closedir(dir);
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
