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

	for (i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	printf("%lu", i);
	printf("\n");
	return (0);
}

