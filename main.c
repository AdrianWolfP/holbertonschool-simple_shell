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
	size_t chara;

	buffer = ((chara*)malloc (sizeof(char));
	if (buffer == NULL)
	{
		perror("Error");
	}

	prinf("$: ");
	chara = getline(&buffer, &size, stdin);
	return (0);
}
