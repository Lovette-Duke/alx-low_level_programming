#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to be searched
 * @size: the size of the array
 * @cmp: the pointer to the function to be used to compare values
 * Return: index or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
