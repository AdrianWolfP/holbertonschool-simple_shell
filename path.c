#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "headers.h"
/**
 * get_path - function searching enviorment list to find the
 * env variable name and returns a pointer to value string
 *
 * @command: file being searched for in path
 *
 * Return: NULL or full path
 */
char *get_path(char *command)
{
	char *path = getenv("PATH"); /*get value of path environment*/
	char *path_copy = strdup(path); /*copy path for tokenize*/
	char *full_path = NULL; /*full path command*/
	char *tok; /*token for path*/

	if (path == NULL || path_copy == NULL)
		return (NULL);

	tok = strtok(path_copy, ":"); /*tokenize with :*/
	while (tok != NULL)
	{
		full_path = calloc(strlen(tok) + strlen(command) + 2, sizeof(char));
    
		strcpy(full_path, tok); /*copy tok to path*/
		strcat(full_path,  "/");
		strcat(full_path, command); /*add command to path*/

		if (access(full_path, X_OK) == 0) /*check if path is executable*/
		{
			return (strdup(full_path)); /*return path if it is*/
		}


		free(full_path);
		tok = strtok(NULL, ":"); /*move to next token*/
	}
	free(path_copy);
	return (NULL);
}
