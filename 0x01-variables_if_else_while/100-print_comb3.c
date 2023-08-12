#include <stdio.h>

/**
 * main - uses putchar to print the loweset possible combination of 2 digits
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i != '8' || (i == '8' && j != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = 0;
		i++;
	}
	putchar('\n');
	return (0);
}
