#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include "headers.h"
/**
 * main - gives command line with prompt $ and reads imput
 * from user infinitely until user presses ctr-d
 *
 * Return: 0 on successful execution
 */
void token(char *arg[]);
void exitshell(void);

int main(void)
{
	char *buffer = NULL; /*pointer for input*/
	size_t buffsize = 1024; /*size of input buff*/
	ssize_t ch; /*num of char read by getline*/

	/*allocate mem for input buff*/
	buffer = malloc(buffsize * sizeof(char));

	while (1) /*start of infinite loop*/
	{
		/*prompt*/
		printf("$ ");
		/*reading input with getline*/
		ch = getline(&buffer, &buffsize, stdin);
		/*break loop with Ctrl-D*/
		if (ch == -1)
		{
			exitshell();
			break;
		}
		token(NULL);
	}
	free(buffer);
	return (0);
}
/**
 * exitshell - the function that will exit out of the shell
 * @arg: argument 
 */
void exitshell(void)
{

	printf("Exiting shell..\n");
	exit(0);

}
