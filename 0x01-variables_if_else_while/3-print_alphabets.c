#include <stdio.h>
/**
 * main - holds the putchar statement
 *
 * Return: 0
 */

int main(void)
{
	char w = 'a';
	char c = 'A';

	while (w <= 'z')
	{
		putchar(w);
		w++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}

