#include <stdio.h>

/**
 * main - using putchar to print hexadecimal digits and characters
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char l = 'a';

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (l < 'g')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
