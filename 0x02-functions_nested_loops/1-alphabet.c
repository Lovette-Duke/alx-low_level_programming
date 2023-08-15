#include "main.h"
/**
 * main - holds the statements that print the alphabet
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c < 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
