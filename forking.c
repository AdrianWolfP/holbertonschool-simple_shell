#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <headers.h>

/*
 * commandex: command execution for parent/child process
 *
 * @arg: argument strings
 */

void comandex(char *arg[])
{
	pid_t pid = fork();

	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (wait)
		{
			perror("wait");
			exit(EXIT_FAILURE);
		}
	}
}
