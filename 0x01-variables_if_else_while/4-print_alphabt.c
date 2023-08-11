#include <stdio.h>

/**
 * main - holds the putchar statement
 *
 * Return: 0
 */

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'e' && l != 'q')
			putchar(l);
		l++;
	}
	putchar('\n');

	return (0);
}
