#include <stdlib.h>
#include <string.h>
#include "headers.h"
/**
 * get_path - function searching enviorment list to find the
 * env variable name and returns a pointer to value string
 *
 * @command:
 *
 * Return:
 */
char *get_path(char *command)
{
	char *path = getenv("PATH");
	char *path_copy = strdup(path);
	char *full_path = NULL;
	char tok;

	if (path == NULL)
		return(NULL);

	if (path_copy == NULL)
		return(NULL);

	tok = strtok(path_copy, ":");
	while (tok != NULL)
	{

