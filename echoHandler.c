#include "shell.h"

/**
 * echoHandle - Handles echo command
 * @argv: Array of strings containing the command and its arguments
*/

void echoHandle(char **argv)
{
	if ((!_strcmp(argv[0], "echo")) && (argv[1] == NULL))
	{
		/*printf("\n");*/
		_putchar('\n');
		argv[0] = NULL;
	}
	else if (((!_strcmp(argv[0], "echo") && argv[1][0] == '$') ||
				(argv[0][0] == '$')))
	{
		variablesReplacement(argv);
	}
}
