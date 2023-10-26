#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the pointer to the integer to be changed
 * @index: the index at which 0 will be set
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1ul << index) & *n);
	return (1);
}
