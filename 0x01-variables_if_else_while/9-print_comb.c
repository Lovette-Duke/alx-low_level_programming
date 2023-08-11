#include <stdio.h>

/**
 * main - uses putchar to print single digit followed by a comma
 *
 * Return: 0
 */

int main(void)
{
	int i = 1;

	putchar('0');
	while (i < 10)
	{
		putchar(',');
		putchar(' ');
		putchar(i + '0');
		i++;
	}
	return (0);
}
