#include "search_algos.h"

/**
 * linear_search - Linear search algorithm
 * @arr:  array
 * @size: size of given array
 * @val: search value
 * Return: index or -1
 */
int linear_search(int *arr, size_t size, int val)
{
	size_t i;

	if (!size || !arr)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, arr[i]);
		if (arr[i] == val)
			return (i);
	}

	return (-1);
}
