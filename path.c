#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers.h"
/**
 * get_path - function searching enviorment list to find the
 * env variable name and returns a pointer to value string
 *
 * @command: file being searched for in path
 *
 * Return: NULL
 */
char *get_path(char *command)
{
	char *path = getenv("PATH");
	char *path_copy = strdup(path);
	char *full_path = NULL;
	char tok;

	if (path == NULL || path_copy == NULL)
		return(NULL);

	tok = strtok(path_copy, ":");
	while (tok != NULL)
	{
		full_path = malloc(strlen(tok) = strlen(command) + 2);
		if (full_path == NULL)
		{
			return(NULL);
		}
		strcpy(full_path, tok);
		strcat(full_path, command);
		strcat(full_path, "/");

		if (access(full_path, X_OK) == 0)
		{
			fee();
			return(full_path);
		}


		free(full_path);
		tok = strtok(NULL, ":");
	}
	free(path_copy);
	return(NULL);
}
