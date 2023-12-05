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

	/*tokenize input*/
	token = strtok(args[0], delims);
	/*looping through tokens and storing in array*/
	while (token != NULL && x < 9)
	{
		args[x] = token;
		token = strtok(NULL, delims);
		x++;
	}
	/*end of array with null*/
	args[x] = NULL;

	if (strcmp(args[0], "env") == 0)
		printenv();
	else
	/*calling comandex function*/
		comandex(args);
}
