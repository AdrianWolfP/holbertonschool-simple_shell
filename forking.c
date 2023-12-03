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

	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		if (execve(args[0], args, environ) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (wait(&stat) == -1)
		{
			perror("wait");
			exit(EXIT_FAILURE);
		}
	}
}
