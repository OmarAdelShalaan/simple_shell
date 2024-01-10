#include "shell.h"

#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes to stdout
 * @ch: passed char to be printed
 * Return: (1) in success, otherwise -1
*/


int _putchar(char ch)
{
	return (write(1, &ch, 1));
}


