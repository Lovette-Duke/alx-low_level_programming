#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: times table
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int x = i * j;

			if (x < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(x + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			if (j !=9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
