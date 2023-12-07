#include "headers.h"

/**
 * comandex - command execution for parent/child process
 *
 * @command: command
 * Return: from the child
 */
void comandex(char *args[], char *command)
{
	pid_t pid = fork(); /*create child process*/
	int stat; /*child status*/
	char *command_path = get_path(command); /*get the command path*/
	
	if (command_path == NULL)
	{
		fprintf(stderr, "Command not found: %s\n", command);
		return;
	}
	if (args != NULL)
	{
		args[0] = command_path;
		args[1] = command;
		args[2] = NULL;
	}
	if (pid == -1)
	{
		perror("fork"); /*error while forking*/
		free(command_path);
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		if (execv(command_path, args) == -1)
		{
			perror("Execute fail"); /*error while executing command*/
			free(command_path);
			exit(EXIT_FAILURE);
		}
	}
	else /*parent process*/
	{
		if (waitpid(pid, &stat, 0) == -1)
		{
			perror("wait parent"); /*error while waiting*/
			free(command_path);
			exit(EXIT_FAILURE);
		}
	}
	free(command_path); /*free memory*/
}
