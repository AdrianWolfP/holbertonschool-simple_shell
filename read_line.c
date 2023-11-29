#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <string.h>
#include "header.h"

char *read_line(void)
{
	int bufsize = 
{
	char *line = NULL;
	ssize_t bufsize = 0;

	if (getline(&line, &bufsize, stdin) == -1)
