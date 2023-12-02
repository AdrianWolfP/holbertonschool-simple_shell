#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * main - gives command line with prompt $ and reads imput
 * from user infinitely until user presses ctr-d
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	char *buffer = 0;
	size_t size = 0;
	ssize_t ch;
	char *token;
	char delims[] = " :/";
	char *args[10];
	int x;

	while (1)
	{
		printf("\n$ ");

		ch = getline(&buffer, &size, stdin);
		if (ch == -1)
			break;

		if (ch > 1)
		{
			token = strtok(buffer, delims);

			while (token != NULL)
			{
				args[x] = token;
				token = strtok(NULL, delims);
				x++;
			}
			args[x] = NULL;

			if (execve(args[0], args) == -1)
			{
				perror("ERROR");
				exit(ERROR);
			}
		}
	}

	free(buffer);
	return (0);
}
