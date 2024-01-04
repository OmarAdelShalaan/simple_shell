#include "shell.h"

/**
 * putOldDir - Puts the OLDPWD environment variable
 * with the provided directory path
 * @oldDir: The directory path to be set as the OLDPWD variable
 */

void putOldDir(char *oldDir)
{
	if (setenv("OLDPWD", oldDir, 1) == 0)
	{
		/*printf("PWD environment variable updated to: %s\n", oldDir);*/
	}
	else
	{
		/*perror("Error setting PWD environment variable");*/
		return;
	}
}

