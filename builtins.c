#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include "headers.h"
/**
 * builtin - handling built in commands
 *
 * @args: arguments
 *
 */

void builtin(char *args[])
{
	int x = 0; /*counter*/

		/*prints given arg*/
	while (args[x] != NULL)
	{
		printf("%s ", args[x]);
		x++;
	}
	printf("\n");

}
