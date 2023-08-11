#include <stdio.h>

/**
 * main - uses putchar to print the loweset possible combination of 2 digits
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j = 1;

	putchar('0');
	putchar('1');

	while (j < 10)
	{
		while (i < j)
		{
			putchar(',');
			putchar(' ');
			putchar(i + '0');
			putchar(j + '0');
			i++;
		}
		i = 0;
		j++;
	}
	putchar('\n');
	return (0);
}
