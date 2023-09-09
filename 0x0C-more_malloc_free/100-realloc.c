#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: the pointer to the previously allocated memory
 * @old_size: the size of the allocated space to ptr
 * @new_size: the new size of the new memory to be allocated
 * Return: none
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *m;
	unsigned int i;
	unsigned int n = new_size;
	char *ptr1 = ptr;

	m = malloc(new_size);
	if (m == NULL)
		return (NULL);

	if (ptr == NULL)
		return (m);
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		m[i] = ptr1[i];
	free(ptr);
	return (m);
}
