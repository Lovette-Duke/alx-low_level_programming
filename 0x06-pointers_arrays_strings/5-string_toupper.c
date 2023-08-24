#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: the string to be changed
 * Return: string in uppercase
 */

char *string_toupper(char *s)
{
	char *p = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 'a' + 'A';
		s++;
	}
	return (p);
}
