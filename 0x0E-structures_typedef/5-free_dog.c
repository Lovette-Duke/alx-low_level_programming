#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory reserved and used for the dog_t
 * @d: the pointer to the memory to be freed
 * Return: none
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
