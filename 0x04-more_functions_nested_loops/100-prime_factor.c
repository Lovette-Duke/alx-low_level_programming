#include <stdio.h>
#include <math.h>

/**
 * main - find the largest prime number
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	long int i;
	int max_prime;

	for (i = 2; i <= sqrt(n); i++)
	{
		while (n % i == 0)
		{
			n /= i;
			if (i > max_prime)
			{
				max_prime = i;
			}
		}
	}
	if (n > max_prime)
	{
		max_prime = n;
	}

	return (max_prime);
}

