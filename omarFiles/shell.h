#ifndef SHELL_H_
#define SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>

#define MAX_ARGS 100
extern char **environ;

void gitCommandLine(char **, size_t *);
void cutCommandLine(char *buffer, char *argv[MAX_ARGS]);
int exeCommandLine(char *argv[MAX_ARGS]);
void Printenv(void);
void FreeARGV(char **argv);
char *PutPATH(char **argv);
void changeDir(char **argv);
void putOldDir(char *oldDir);
void variablesReplacement(char **argv);
void exitHandle(char **argv);
void echoHandle(char **argv);
void handleCommandWithoutPATH(char **argv);

#endif

