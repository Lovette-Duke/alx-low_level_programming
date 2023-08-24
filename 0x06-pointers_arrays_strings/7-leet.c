#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to be encoded
 * Return: the encoded string
 */

char *leet(char *s)
{
	int i = 0;
	int j;
	char *a = "aeotl";
	char *b = "AEOTL";
	char *c = "43071";

	while (s[i] != '\0')
	{
		j = 0;

		while (j < 5)
		{
			if (s[i] == a[j] || s[i] == b[j])
			{
				s[i] = c[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
