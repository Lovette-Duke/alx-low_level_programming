#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - ...
 * @argc: the count of argument in the main fuction
 * @argv: the array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*operands)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operands = get_op_func(argv[2]);

	if (!operands)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operands(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
