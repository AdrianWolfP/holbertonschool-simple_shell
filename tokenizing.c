#include "headers.h"
/**
 * token - creates a string from the input into an array to b
 * passed to through
 * @arg: argument string
 * Return: string with array
 */
void token(char *arg[])
{
	ssize_t ch; /*num of char read by getline*/
	char *token;
	char delims[] = " :/"; /*delimiters*/
	int x;

	if (ch < 1)
	{
		/*reset counter*/
		x = 0;
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
			exitshell(0);
			break;
		}
		else if (strcmp(args[0], "env") == 0)
		{
			printenv();
		}
		else
		{
		/*calling comandex function*/
		comandex(args);
		/*calling list function*/
		listfiles(args);
		}
	}
	/*free memory*/
	free(buffer);
	return (0);
}
