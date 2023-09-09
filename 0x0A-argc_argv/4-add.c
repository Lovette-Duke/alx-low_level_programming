#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positve numbers
 * @argc: the argument count
 * @argv: the array of arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, n;
	char *f;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		n = strtol(argv[i], &f, 10);
		if (*f)
		{
			printf("Error\n");
			return (1);
		}
		sum += n;
	}
	printf("%d\n", sum);

	return (0);
}
