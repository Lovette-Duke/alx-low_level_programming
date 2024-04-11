#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array of integers
  * @arr: pointer to the first element of the array
  * @size: number of elements in array
  * @val: search value
  * Return: -1 or first index of value.
  */
int jump_search(int *arr, size_t size, int val)
{
	size_t i, jp, step;

	if (!arr || !size)
		return (-1);

	step = sqrt(size);
	for (i = jp = 0; jp < size && arr[jp] < val;)
	{
		printf("Value checked array[%ld] = [%d]\n", jp, arr[jp]);
		i = jp;
		jp += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jp);

	jp = jp < size - 1 ? jp : size - 1;
	for (; i < jp && arr[i] < val; i++)
		printf("Value checked array[%ld] = [%d]\n", i, arr[i]);
	printf("Value checked array[%ld] = [%d]\n", i, arr[i]);

	return (arr[i] == val ? (int)i : -1);
}
