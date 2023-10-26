#include "main.h"

/**
 * flip_bits - produces the number of bits needed to flip a number
 * @n: the number to be flipped
 * @m: the other number to be compared
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int j = 0;
	unsigned long int c;
	unsigned long int xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = xor >> i;
		if (c & 1)
			j++;
	}
	return (j);
}
