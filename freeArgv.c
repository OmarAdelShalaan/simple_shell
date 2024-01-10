#include "shell.h"

/**
 * FreeARGV - Deallocates memory for an array of strings
 * @argv: Pointer to an array of strings to be deallocated
 */
void FreeARGV(char **argv)
{
	int i = 0;
	char *tempPTR = NULL;

	while (i != MAX_ARGS)
	{
		if (argv[i] != NULL)
		{
			tempPTR = argv[i];
			/*printf("argv: %s\n", argv[i]);*/
			/*printf("temp: %s\n", tempPTR);*/
			free(tempPTR);
			argv[i] = NULL;
		}
		i++;
	}
}

