#include "main.h"

/**
 * _strncat - concatenates two strings but has a byte limit
 * @dest: the destination string
 * @src: the string to be concatenated
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';
	return (s);
}
