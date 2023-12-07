#include "headers.h"
/**
 * main - gives command line with prompt $ and reads imput
 * from user infinitely until user presses ctr-d
 * Return: 0 on successful execution
 */
void token(char *arg[]);
void builtins(char *buffer);

int main(void)
{
	char *buffer = NULL; /* pointer for input */
	size_t buffsize = 1024; /* size of input buff */
	ssize_t ch; /* num of char read by getline */

	/* allocate mem for input buff */
	buffer = malloc(buffsize * sizeof(char));
	if (buffer == NULL)
		exit(EXIT_FAILURE);
	while (1) /* start of infinite loop */
	{
		/* prompt */
		if (isatty(STDIN_FILENO))
		{
			printf("$ ");
			fflush(stdout);
		}
		/* reading input with getline */
		ch = getline(&buffer, &buffsize, stdin);
		/* break loop with Ctrl-D */
		if (ch == -1)
		{
			if (feof(stdin))
			{
				printf("\n");
				exitshell();
				break;
			}
			else
			{
				exit(EXIT_FAILURE);
			}
		}

		/* Remove newline character from input */
		buffer[strcspn(buffer, "\n")] = '\0';
		builtins(buffer); /* check built-in command */
		memset(buffer, 0, buffsize);
	}
	free(buffer);
	return (0);
}
/*exitshell - exits shell */
void exitshell(void)
{
	exit(EXIT_SUCCESS);
}
/**
 * builtins - checking for built-in commands and going to commandex
 */
void builtins(char *buffer)
{
	char *args[10]; /*array for arg*/
	char **env = environ;

	if (strcmp(buffer, "exit") == 0)
	{
		exit(EXIT_SUCCESS);
	}
	if (strcmp(buffer, "env") == 0)
	{
		while (*env != NULL)
		{
			printf("%s\n", *env);
			env++;
		}
	}
	else if (strcmp(buffer, "ls") == 0)
		system("ls");
	else /* commands set as first and second arg */
	{
		args[0] = buffer;
		args[1] = NULL;
		token(args);
	}
}
