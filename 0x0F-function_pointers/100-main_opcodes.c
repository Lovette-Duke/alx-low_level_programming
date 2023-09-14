#include <stdio.h>
#include <stdlib.h>

/**
 * _opcodes - prints it machine code of its main function
 * @a: pointer to code
 * @n: number of bytes to be printed
 * Return: none
 */

void _opcodes(char *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
		i++;
	}
	printf("\n");
}

/**
 * main - the function to be printed
 * @argc: the count of the arguments accepted by main
 * @argv: the array holding the arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	_opcodes((char *)&main, i);
	return (0);
}
