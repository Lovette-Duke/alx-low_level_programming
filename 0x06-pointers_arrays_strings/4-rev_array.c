#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array to be reversed
 * @n: the number of elements in the array
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int m = n - 1;
	int b;

	while (i < n / 2)
	{
		b = a[i];
		a[i] = a[m];
		a[m--] = b;
		i++;
	}
}

