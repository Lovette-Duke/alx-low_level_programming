#include "main.h"

/**
 * print_line - prints a line on the terminal
 * @n: the number of long the line should be
 * Return: none
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
