#include <sys/stat.h>
#include "headers.h"
/**
 * get_path - function searching enviorment list to find the
 * env variable name and returns a pointer to value string
 * @command: file being searched for in path
 * Return: NULL or full path
 */
void *absolutepath(char *com);
char *get_path(char *command)
{
	char *path = getenv("PATH"); /*get value of path environment*/
	char *path_copy = NULL, *full_path = NULL; /*fullpath and copy*/
	char *tok = NULL; /*token for path*/
	struct stat st;

	absolutepath(command);
	if (path == NULL)
		return (NULL);
	path_copy = strdup(path);
	if (path_copy == NULL)
		return (NULL);
	tok = strtok(path_copy, " :/"); /*tokenize with :*/
	while (tok != NULL)
	{
		full_path = calloc(strlen(tok) + strlen(command) + 2, sizeof(char));
		if (full_path == NULL)
		{
			perror("calloc");
			free(path_copy);
			return (NULL);
		}
		strcpy(full_path, tok); /*copy tok to path*/
		strcat(full_path,  "/");
		strcat(full_path, command); /*add command to path*/
		/*check if path is executable*/
		if (stat(full_path, &st) == 0 &&
			S_ISREG(st.st_mode) && (st.st_mode & S_IXUSR))
		{
			free(path_copy);
			return (full_path); /*return path if it is*/
		}
		free(full_path);
		tok = strtok(NULL, " :/"); /*move to next token*/
	}
	free(path_copy);
	return (NULL);
}

/*absolutepath - check if command is an absolute path */
void *absolutepath(char *com)
{
	struct stat st;

	if (com[0] == '/')
	{
		if (stat(com, &st) == 0 &&
				S_ISREG(st.st_mode) && (st.st_mode & S_IXUSR))
		{
			return (com);
		}
		else
		{
			return (NULL);
		}
	}
	return (NULL);
}
