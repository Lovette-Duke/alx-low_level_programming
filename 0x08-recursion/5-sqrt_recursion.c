#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number whose root is to be found
 * Return: the square root
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - finds the natural square root of a number
 * @n: number whose square root is to be calculated
 * @i: the number of iterations
 * Return: the square root
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
