#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the integer to be converted to binary
 * Return: none
 */

void print_binary(unsigned long int n)
{
	int i;
	int j = 0;
	unsigned long int m;

	for (i = 63; i >= 0; i--)
	{
		m = n >> i;

		if (m & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j != 0)
			_putchar('0');
	}
	if (j == 0)
		_putchar('0');
}
