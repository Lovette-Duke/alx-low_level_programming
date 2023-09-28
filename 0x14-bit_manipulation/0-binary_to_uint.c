#include "main.h"

/**
 * binary_to_uint - convets a binary number to an unsigned int
 * @b: the pointer to a string of 0 and 1 characters
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int j = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		j = 2 * j + (b[i] - '0');
		i++;
	}
	return (j);
}
