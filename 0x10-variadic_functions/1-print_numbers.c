#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string to be printed between the numbers
 * @n: the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int next;

	va_list args;

	va_start(args, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		next = va_arg(args, int);
		printf("%d", next);
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
