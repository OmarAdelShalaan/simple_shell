#include "shell.h"

/**
 * echoHandle - Handles echo command
 * @argv: Array of strings containing the command and its arguments
*/

void echoHandle(char **argv)
{
	if ((!strcmp(argv[0], "echo")) && (argv[1] == NULL))
	{
		printf("\n");
		argv[0] = NULL;
	}
	else if (((!strcmp(argv[0], "echo") && argv[1][0] == '$') ||
				(argv[0][0] == '$')))
	{
		variablesReplacement(argv);
	}
}
