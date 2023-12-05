#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include "headers.h"
/**
 * printpids -  Gets the awenser from child and prints it out to the parent
 * Return: Always 0
 */

void printpids(void)
{
	int i;

	for (i = 0; i < 5 ; i++)
	{
		if (fork() == 0)
		{
			printf("[Child] pid %d from [PaPa] pid %d\n", getpid(), getppid());
			exit(0);
		}
	}
	for (i = 0; i < 5 ; i++)
		wait(NULL);
}
