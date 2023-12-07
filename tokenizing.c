#include "headers.h"
/**
 * token - creates a string from the input into an array to b
 * passed to through
 * @arg: argument string
 */
void comandex(char *args[], char *command);

void token(char *args[])
{
	char *token;
	char delims[] = " \t:/\n"; /*delimiters*/
	int x = 0;
	int i;
	char **toka = malloc(10 * sizeof(char *));
	char *command = NULL;

	/*tokenize input*/
	token = strtok(args[0], delims);
	/*looping through tokens and storing in array*/
	while (token != NULL && x < 9)
	{
		toka[x] = strdup(token);
		/*set command to first token */
		if ((x == 0) && (command == NULL))
			command = toka[x];
		token = strtok(NULL, delims);
		x++;
	}
	/*end of array with null*/
	toka[x] = NULL;

	if (command != NULL)
		comandex(args, command);
	/* frees mem for each element in toka*/
	for (i = 0; i < x; i++)
		free(toka[i]);
	
	free(toka);
}
