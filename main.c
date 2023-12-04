#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "headers.h"

void builtin(char *args[]);
/**
 * main - gives command line with prompt $ and reads imput
 * from user infinitely until user presses ctr-d
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	char *buffer = NULL, *args[10];
	size_t buffsizesize = 1024;
	ssize_t ch;
	char *buffer = malloc(buffersize * sizeof(char));
	char *token;
	char delims[] = " :/";
	int x;

	while (1)
	{
		printf("\n$ ");

		ch = getline(&buffer, &size, stdin);
		if (ch == -1)
			break;

		if (ch > 1)
		{
			x = 0;
			token = strtok(buffer, delims);

			while (token != NULL && x < 9)
			{
				args[x] = token;
				token = strtok(NULL, delims);
				x++;
			}

			args[x] = NULL;

			comandex(args);
			builtin(args);
		}
	}
	free(buffer);
	return (0);
}
