#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: one string to be concatenated
 * @s2: the other string to be concatenated
 * Return: pointer with the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_s;
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int j = 0;

	if (s1 != NULL && s2 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
		while (s2[len2] != '\0')
			len2++;
	}
	concat_s = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat_s == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		concat_s[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concat_s[len1 + j] = s2[j];
		j++;
	}

	return (concat_s);

}
