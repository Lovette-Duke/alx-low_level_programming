#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to search for
 * Return: haystack or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
