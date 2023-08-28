#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the pointer to the variable/array
 * @b: the constant byte to be filled
 * @n: the number of characters to be filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i]  = b;
		i++;
	}
	return (s);
}
