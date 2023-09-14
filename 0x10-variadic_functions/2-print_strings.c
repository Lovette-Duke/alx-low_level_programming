#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between strings
 * @n: the number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *next;

	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		next = va_arg(args, char*);
		if (next == NULL)
			next = "(nil)";
		printf("%s", next);
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);

}
