#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines the struct dog
 * @name: the name of the dog
 * @age: the dog's age
 * @owner: the name of the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*dog_t *new_dog(char *name, float age, char *owner);
*void free_dog(dog_t *d);*/

#endif
