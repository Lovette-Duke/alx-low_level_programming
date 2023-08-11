#include <stdio.h>

/**
 * main - holds the putchar statement to print a to z in reverse
 *
 * Return: 0
 */

int main(void)
{
	char l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
