#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - I don't know yet
 *
 * Return: :)
 */

int main(int argc, char **argv)
{
	char *buffer;
	size_t size = 32;
	size_t ch;

	buffer = malloc(size * sizeof(char);
	if (buffer == NULL)
	{
		perror("Error");
		return (1);
	}
	while ((ch = getline(&buffer, &size, stdin)) != 1)
	{
		printf("$ ");
	}

	free(buffer)
	return (0);
}
