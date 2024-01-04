#include "shell.h"

/**
 * main - Simole Shell program to execute commands
 *
 * Return: return 0
 */

int main(void)
{
	char *buffer = NULL;
	size_t bufsize = 1024;
	char *argv[MAX_ARGS] = {NULL};

	while (1)
	{
		gitCommandLine(&buffer, &bufsize);
		if (buffer == NULL)
			return (1);
		if (buffer[0] == '\n')
		{
			free(buffer);
			buffer = NULL;
			continue;
		}
		cutCommandLine(buffer, argv);
		if (!strcmp(argv[0], "exit"))
			exitHandle(argv);
		else if ((*argv[0]) == '/')
			exeCommandLine(argv);
		else if (!strcmp(argv[0], "env"))
			Printenv();
		else if ((!strcmp(argv[0], "cd")))
			changeDir(argv);
		else if (((!strcmp(argv[0], "echo")) && (argv[1] == NULL)))
			echoHandle(argv);
		else if (((!strcmp(argv[0], "echo")) && (argv[1][0] == '$')) ||
				(argv[0][0] == '$'))
			echoHandle(argv);
		else
			handleCommandWithoutPATH(argv);
		free(buffer);
		buffer = NULL;
	}
	return (0);
}

