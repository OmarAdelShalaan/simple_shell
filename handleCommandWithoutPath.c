#include "shell.h"

/**
 * handleCommandWithoutPATH - Simole Shell program to execute commands
 * @argv: Array of strings containing the command and its arguments
 * Return: void
 */

void handleCommandWithoutPATH(char **argv)
{
	argv[0] = PutPATH(argv);
	if (argv[0] != NULL)
	{
		exeCommandLine(argv);
		free(argv[0]);
		argv[0] = NULL;
	}
	else
	{
		printf("No such file or directory\n");
	}
}

