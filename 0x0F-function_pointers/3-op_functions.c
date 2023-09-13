#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: number to be added
 * @b: the other number to be added
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a from b
 * @a: number to subtract from
 * @b: the number to be subtracted
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: number to be multplied
 * @b: the other number to be multiplied
 * Return: the product of the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: number to be divided
 * @b: the number dividing a
 * Return: the result of the division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - divides a by b and returns the remainders
 * @a: number to be divideed
 * @b: the number dividing a
 * Return: the remainder of the division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
