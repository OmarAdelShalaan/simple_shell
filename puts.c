#include "shell.h"

/**
 * _putchar - writes to stdout
 * @ch: passed char to be printed
 * Return: (1) in success, otherwise -1
*/

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}

/**
 * _putstr - writes to stdout
 * @str: passed string to be printed
 * Return: (num)  of string in success, otherwise -1
*/

int _putstr(char *str)
{
	int len = 0;

	len = _strlen(str);
	return (write(STDIN_FILENO, str, len));
}
