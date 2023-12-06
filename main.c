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
	char *args[2];

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
			if (feof(stdin))
			{
				printf("\n");
				exitshell();
				break;
			}
			else
				exit(EXIT_FAILURE);
		}
		/* Remove newline character from input */
		buffer[strcspn(buffer, "\n")] = '\0';
		if (buffer[0] == '\0')
			continue;
		/* Convert the buffer into an array of pointers */
		args[0] = buffer;
		args[1] = NULL;
		token(args);
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
	exit(EXIT_SUCCESS);

}
