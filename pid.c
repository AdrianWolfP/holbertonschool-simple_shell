#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0
 */
int main()
{
	for(int i = 0; i < 5 ; i++)
	{
		if(fork() == 0)
		{
			printf("[Child] pid %d from [PaPa] pid %d\n", getpid(), getppid());
			exit(0);
		}
	}
	for(int i = 0; i < 5 ; i++)
	wait(NULL);
}
