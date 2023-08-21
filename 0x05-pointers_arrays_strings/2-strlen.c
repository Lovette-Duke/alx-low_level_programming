#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: the string to be counted
 * Return: lenght
 */

int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
