#include <stdio.h>

/**
 * main - uses putchar to print single digit followed by a comma
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
		i++;
	}
	return (0);
}
