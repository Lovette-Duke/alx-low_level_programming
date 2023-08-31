#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to be checked
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - check if a number is a prime number
 * @n: the number to be checked if its prime
 * @i: the iterator varible
 * Return: 0 or 1
 */

int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}
