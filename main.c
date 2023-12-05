#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include "headers.h"

void builtin(char *args[]);
/**
 * main - gives command line with prompt $ and reads imput
 * from user infinitely until user presses ctr-d
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	char *buffer = NULL, *args[10]; /*pointer for input, array for token arg*/
	size_t buffsize = 1024; /*size of input buff*/
	ssize_t ch; /*num of char read by getline*/
	char *token; /*pointer for tokens*/
	char delims[] = " :/"; /*delimiters*/
	int x; /*counter variable*/

	/*allocate mem for input buff*/
	buffer = malloc(buffsize * sizeof(char));
	while (1) /*start of infinite loop*/
	{
		printf("\n$ "); /*prompt*/
		/*reading input with getline*/
		ch = getline(&buffer, &buffsize, stdin);
		if (ch == -1) /*break loop with Ctrl-D*/
			break;

		if (ch > 1)
		{
			x = 0; /*reset counter*/
			token = strtok(buffer, delims); /*tokenize input*/
			
			/*looping through tokens and storing in array*
			while (token != NULL && x < 9)
			{
				args[x] = token;
				token = strtok(NULL, delims);
				x++;
			}

			args[x] = NULL; /* end array with null */

			comandex(args); /*calling comandex function*/
			builtin(args); /*calling builtin function*/
		}
	}
	free(buffer); /*free memory*/
	return (0);
}
