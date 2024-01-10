#include "shell.h"

/**
 * changeDir - Changes the current directory based on input arguments
 * @argv: Array of strings containing command-line arguments
 *
 * Return: dosen't return.
*/

void changeDir(char **argv)
{
	char *home_dir = NULL;
	char *old_dir = NULL;
	char nowDirpath[1024];

	if (getcwd(nowDirpath, sizeof(nowDirpath)) == NULL)
		return;
	if (argv[1] == NULL)
	{
		home_dir = getenv("HOME");
		if (chdir(home_dir) == 0)
		{
		if (setenv("PWD", home_dir, 1) != 0)
			return;
		}
		else
			return;
	}
	else if (!_strcmp(argv[1], "-"))
	{
		old_dir = getenv("OLDPWD");
		if (chdir(old_dir) == 0)
		{
			if (setenv("PWD", old_dir, 1) != 0)
				return;
		}
		else
			return;
	}
	else
	{
		if (chdir(argv[1]) == 0)
		{
			if (setenv("PWD", nowDirpath, 1) != 0)
				return;
		}
		else
			return;
	}
	putOldDir(nowDirpath);
}
