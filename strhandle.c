#include "shell.h"


/**
 * _strlen - Returns length of a string
 * @s: String parameter
 *
 * Return: Value
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - Copies the string pointed to by src,
 * including terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: First parameter
 * @src: Second parameter
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	for (; src[len] != '\0';)
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * _strcmp - compare two string
 * @s1: First string
 * @s2: Second string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((int)(s1[i] - s2[i]));
		i++;
	}
	return (0);
}

/**
 * _strcat - to join to string together
 * @dest: First parameter
 * @src: Second parameter
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
