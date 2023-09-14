#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all of its parameters
 * @n: the last named parameter to be sumed
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	unsigned int num;

	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, unsigned int);
		sum += num;
	}
	va_end(args);

	return (sum);
}
