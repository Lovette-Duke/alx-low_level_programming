#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: the pointer to the value to be printed
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	int f;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(args, int));
				f = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				f = 0;
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				f = 0;
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				f = 0;
				break;
			default:
				f = 1;
				break;
		}
		if (format[i + 1] != '\0' && f == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
