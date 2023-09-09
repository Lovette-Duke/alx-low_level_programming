#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the argument count
 * @argv: the array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul = atoi(argv[1]) * atoi(argv[2]);

	(void) argc;

	printf("%d\n", mul);
	return (0);
}
