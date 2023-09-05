#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: the size of the array
 * @c: the character to initialize the array
 * Return: Null,0 or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *a = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
