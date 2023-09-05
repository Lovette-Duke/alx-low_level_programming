#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: the count of arguments
 * @av: the vector of all arguments
 * Return: pointer to concatenated string
 */

char *argstostr(int ac, char **av)
{
	char *s;
	char *s1;
	int i, j, n;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j])
		{
			len++;
			j++;
		}
		len++;
	}

	s = (char *)malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		s1 = av[i];
		n = 0;

		while (s1[n])
		{
			s[j] = s1[n];
			n++;
			j++;
		}
		s[j++] = '\n';
	}
	s[j] = '\0';
	return (s);
}
