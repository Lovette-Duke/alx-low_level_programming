#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates and array of integers
 * @min: minimum values to be included
 * @max: maximum values to be included
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i = 0;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min) + 1);

	if (array == NULL)
		return (NULL);

	while (min <= max)
	{
		array[i] = min++;
		i++;
	}
	return (array);
}
