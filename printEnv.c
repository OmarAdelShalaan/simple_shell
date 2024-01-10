#include "shell.h"

/**
 * Printenv - Prints all environment variables
 * Return: void
 */

void Printenv(void)
{
	char **env;

	for (env = environ; *env != NULL; env++)
	{
		/*printf("%s\n", *env);*/
		_putstr(*env);
		_putchar('\n');
	}
}

