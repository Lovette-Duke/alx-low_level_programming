#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @arr: pointer to the first element of the array.
  * @size: number of elements in the array.
  * @val: value to search for.
  * Return: index or -1.
  */
int binary_search(int *arr, size_t size, int val)
{
	size_t i, left, right;

	if (!arr)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", arr[i]);
		printf("%d\n", arr[i]);

		i = left + (right - left) / 2;
		if (arr[i] == val)
			return (i);
		if (arr[i] > val)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
