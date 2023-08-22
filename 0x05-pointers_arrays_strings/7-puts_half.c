#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string whos half to be printed
 * Return: none
 */

void puts_half(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if ((len % 2) == 0)
	{
		for (i = (len / 2); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if ((len % 2) != 0)
	{
		for (i = ((len - 1) / 2); i < (len - 1); i++)
		{
			_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}
