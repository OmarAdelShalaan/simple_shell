#include "shell.h"

/**
 * exitHandle - Handles exit from shell
 * @argv: Array of strings containing the command and its arguments
 * Return: Dosen't return.
*/
void exitHandle(char **argv)
{
	int tempExit = 0;

	if (argv[1] != NULL)
	{
		tempExit = atoi(argv[1]);
		argv[1] = NULL;
	}
	free(argv[0]);
	argv[0] = NULL;
	exit(tempExit);
}
