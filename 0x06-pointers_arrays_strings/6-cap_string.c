#include "main.h"

/**
 * cap_string - capitalizes ass the words of a string
 * @s: the string to be capitalized
 * Return: capitalised string
 */

char *cap_string(char *s)
{
	char *p = s;
	int cap = 1;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			if (cap)
			{
				*s = *s - 'a' + 'A';
				cap = 0;
			}
		}
		else if (*s == ' ' || *s == '\t' || *s == '\n' || *s == ',' ||
			*s == ';' || *s == '.' || *s == '!' || *s == '?' ||
			*s == '"' || *s == '(' || *s == ')' || *s == '{' || *s == '}')
			cap = 1;
		else
			cap = 0;
		s++;
	}
	return (p);
}
