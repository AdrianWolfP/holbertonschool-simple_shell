#include <stdlib.h>

/**
 * get_path - function searching enviorment list to find the 
 * env variable name and returns a pointer to value string
 *
 * Return: Pointer to the corresponding value string
 */

char *get_path(char *command){
	char *path, *path_copy;

	path = getenv("PATH");
}
