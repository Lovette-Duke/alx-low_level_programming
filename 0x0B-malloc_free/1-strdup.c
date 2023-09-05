#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string to be duplicated
 * Return: NULL if str = NULL or returns pointer
 */

char *_strdup(char *str)
{
	int len = 0;
	char *dup;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = (char *)malloc(sizeof(char) * len + 1);

	if (dup == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}

	return (dup);
}
