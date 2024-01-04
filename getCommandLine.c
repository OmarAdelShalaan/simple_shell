#include "shell.h"

/**
 * gitCommandLine - Reads a command line input from the user
 * @buffer: Pointer to a character pointer where the input will be stored
 * @bufsize: Pointer to the size of the buffer
 */
void gitCommandLine(char **buffer, size_t *bufsize)
{
	/* ----------------------get command line -------------------*/
	size_t characters;
	/*pid_t pid_to_kill;*/
	printf("($) ");
	characters = getline(buffer, bufsize, stdin);
	if ((int)characters == EOF)
	{
		free(*buffer);
		*buffer = NULL;
		printf("\n");
		return;
	}
	if (buffer == NULL)
	{
		free(buffer);
		printf("Fauiler Realloc\n");
	}
	if ((*buffer)[characters - 1] == '\n' && characters > 1)
		(*buffer)[characters - 1] = '\0';
}
