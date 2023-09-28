#include "main.h"

/**
 * git_bit - produces the value of a bit at a given index
 * @n: the interger to be converted
 * @index: the index of the bit to be returned
 * Return: the value of the bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);

	i = (n >> index) & 1;

	return (i);
}
