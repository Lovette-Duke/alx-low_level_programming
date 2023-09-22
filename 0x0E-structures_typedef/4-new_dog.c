#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the dog's age
 * @owner: the name of the dog's owner
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int n = 0;
	int m = 0;
	int i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	while (name[n] != '\0')
		n++;
	dog->name = malloc(n * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		dog->name[i] = name[i];
	dog->age = age;

	while (owner[m] != '\0')
		m++;
	dog->owner = malloc(m * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < m; i++)
		dog->owner[i] = owner[i];

	return (dog);

}
