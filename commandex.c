#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "headers.h"

/**
 * comandex - command execution for parent/child process
 *
 * @args: argument strings
 * Return: from the child
 */
void comandex(char *args[])
{
	pid_t pid = fork(); /*create child process*/
	int stat; /*child status*/
	char **environ;
	char *command_path; /*command path*/

	command_path = get_path(args[0]); /*get the command path*/
	if (command_path == NULL)
	{
		printf("Error, %s\n", args[0]);
		return;
	}
	if (pid == -1)
	{
		perror("fork"); /*error while forking*/
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		execve(command_path, args, environ); /*execute command*/
		perror("command_path"); /*error while executing command*/
		exit(0);

	}
	else /*parent process*/
	{
		if (wait(&stat) == -1)
		{
			perror("wait"); /*error while waiting*/
			exit(EXIT_FAILURE);
		}
	}
	free(command_path); /*free memory*/
}
