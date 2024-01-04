#include "shell.h"

/**
 * variablesReplacement - Replaces specified environment variables
 *			in the arguments
 * @argv: Array of strings containing command-line arguments
 * Return: void
 */

void variablesReplacement(char **argv)
{
	char envstr[1024];
	char *envPtr = NULL;
	int i = 1;

	if (argv[0][0] == '$' && argv[0][1] == '\0')
		printf("$: command not found\n");
	else if (argv[0][0] == '$')
	{
		while (argv[0][i] != '\0')
		{
			envstr[i - 1] = argv[0][i];
			i++;
		}
		envstr[i - 1] = '\0';
		envPtr = getenv(envstr);
		if (envPtr != NULL)
			printf("%s: %s\n", envPtr, "No such file or directory");
	}
	else if (!strcmp(argv[0], "echo"))
	{
		while (argv[1][i] != '\0')
		{
			envstr[i - 1] = argv[1][i];
			i++;
		}
		envstr[i - 1] = '\0';
		envPtr = getenv(envstr);
		if (envPtr != NULL)
			printf("%s\n", envPtr);
		else
			printf("\n");
	}
}

