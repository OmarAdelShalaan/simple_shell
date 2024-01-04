#include "shell.h"

/**
 * cutCommandLine - Parses a command line input and stores tokens in an array
 * @buffer: Input string to be tokenized
 * @argv: Array to store the tokens
 */
void cutCommandLine(char *buffer, char *argv[MAX_ARGS])
{
    /*Cutting Buffer*/
	char *tok = NULL;
	int i = 0;

	tok = strtok(buffer, " ");
	while (tok != NULL)
	{
		argv[i] = tok;
		tok = strtok(NULL, " ");
		i++;
	}
	tok = NULL;
	argv[i] = NULL;
}
