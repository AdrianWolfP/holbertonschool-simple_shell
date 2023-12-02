#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - gives command line with prompt $ and reads imput
 * from user infinitely until user presses ctr-d
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	char *buffer;
	size_t size = 0;
	ssize_t ch;
	char *token;
	char delims[] = " :/";

	buffer = malloc(size * sizeof(char));
	if (buffer == NULL)
	{
		perror("Error");
		return (1);
	}
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
				printf("%s\n", token);
				token = strtok(NULL, delims);
			}
		}
	}

	free(buffer);
	return (0);
}
