#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "headers.h"

/*
 * commandex: command execution for parent/child process
 *
 * @args: argument strings
 */

void comandex(char *args[])
{
	pid_t pid = fork();
	int stat;
	extern char **environ;
	char *command_path;

	command_path = get_path(args[0]);
	if (command_path  == NULL)
	{
		printf("Error, %s", args[0]);
		return;
	}
	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		execve(command_path, args, environ);
		exit(0);
	
	}
	else
	{
		if (wait(&stat) == -1)
		{
			perror("wait");
			exit(EXIT_FAILURE);
		}
	}
	free(command_path);
}
