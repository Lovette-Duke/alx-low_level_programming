#include <stdio.h>
/**
 * main - holds the putchar statement
 *
 * Return: 0
 */

int main(void)
{
	char w = 'a';

	while (w <= 'z')
	{
		putchar(w);
		w++;
	}
	putchar('\n');

	return (0);
}
