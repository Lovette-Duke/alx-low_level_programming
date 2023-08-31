#include "main.h"

/**
 * wildcmp - compares 2 strings if they are identical
 * @s1: a string to be compared
 * @s2: the other string to be compared
 * Return: 0 or 1
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if ((*s1 == '\0') && (*s2 == '*') && *(s2 + 1) != '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
