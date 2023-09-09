#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: the number of elements in argv
 * @argv: the array of element main holds
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
