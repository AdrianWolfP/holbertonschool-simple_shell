#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include "headers.h"

void listfiles(char *args[])
{
	DIR *dir; /*directory stream*/
	struct dirent *start; /*entry for directory structure*/

	if (strcmp(args[0], "ls") == 0)
	{
		/*lists files in current directory*/
		dir = opendir(".");
		if (dir == NULL)
		{
			perror("opendir");
			return;
		}
		while ((start = readdir(dir)) != NULL)
		{
			/*prints all files in directory*/
			printf("%s\n", start->d_name);
		}
		closedir(dir);
	}
}
