#include "headers.h"
/**
 * token - creates a string from the input into an array to b
 * passed to through
 * @arg: argument string
 */
void comandex(char *arg[]);
void token(char *args[])
{
	char *token;
	char delims[] = " :/"; /*delimiters*/
	int x = 0;
	char *buffer = NULL;

	/*tokenize input*/
	token = strtok(buffer, delims);
	/*looping through tokens and storing in array*/
	while (token != NULL && x < 9)
	{
		args[x] = token;
		token = strtok(NULL, delims);
		x++;
	}
	/*end of array with null*/
	args[x] = NULL;
	if (strcmp(args[0], "exit") == 0)
	{
		exitshell();
	}
	else if (strcmp(args[0], "env") == 0)
	{
		printenv();
	}
	else
	{
	/*calling comandex function*/
	comandex(args);
	}

	free(buffer);
}
