#include "shell.h"

/**
 * PutPATH - Finds the executable file in the PATH environment variable
 * @argv: Array of strings containing the command and its arguments
 * Return: pointer to char
 */

char *PutPATH(char **argv)
{
	char buf[1024], *path = NULL, *ret = NULL;
	char *token = NULL;
	struct stat st;
	int stat_ret = 0, pathlen = 0;
	char *NewPath = NULL;

	path = getenv("PATH");

	if (path == NULL)
		return (NULL);
	pathlen = strlen(path);
	NewPath = (char *)malloc(pathlen + 1);
	strcpy(NewPath, path);
	NewPath[pathlen] = '\0';
	token = strtok(NewPath, ":");
	while (token)
	{
		strcpy(buf, token);
		strcat(buf, "/");
		strcat(buf, argv[0]);
		stat_ret = stat(buf, &st);
		if (stat_ret == 0 && S_ISREG(st.st_mode) && (st.st_mode & S_IXUSR))
		{
			free(NewPath);
			ret = malloc(sizeof(char) * (strlen(buf) + 1));
			if (!ret)
				return (NULL);
			strcpy(ret, buf);
			return (ret);
		}
		token = strtok(NULL, ":");
	}
	free(NewPath);
	return (NULL);
}

