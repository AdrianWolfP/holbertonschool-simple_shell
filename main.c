#include "headers.h"
void token(char *arg[]);
void exitshell(void);
void builtins(char *buffer);

int main(void)
{
	char *buffer = NULL;           /* pointer for input */
	size_t buffsize = 1024;        /* size of input buff */
	ssize_t ch;                    /* num of char read by getline */
	char *args[2];                 /* stores token input */

	/* allocate mem for input buff */
	buffer = malloc(buffsize * sizeof(char));

	while (1) /* start of infinite loop */
	{
	/* prompt */
	printf("$ ");
	fflush(stdout);
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
	}
	else
	{
		exit(EXIT_FAILURE);

	/* Remove newline character from input */
	buffer[strcspn(buffer, "\n")] = '\0';
	builtins(buffer); /* check built-in command */
        /* Convert the buffer into an array of pointers */
        token(args);
	}
	free(buffer);
	return (0);
}
/**
 * builtins - checking for built-in commands and going to commandex
 */
void builtins(void)
{
	char buffer[1024];
	char *args[3];
	char **env = environ;

	if (strcmp(buffer, "exit") == 0)
	{
	exit(EXIT_SUCCESS);
	}
	else if (strcmp(buffer, "env") == 0)
	{
	while (*env != NULL)
	{
		printf("%s\n", *env);
		env++;
		
	}
	else
	{
	args[0] = buffer;
	args[1] = NULL;
	comandex(args, buffer);
	}
}
