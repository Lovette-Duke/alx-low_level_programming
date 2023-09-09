#include <stdio.h>

/**
 * main - prints all arguments; each on a line
 * @argc: the argument count
 * @argv: the array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
