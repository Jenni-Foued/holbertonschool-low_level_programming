#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - Function that prints strings.
 * @separator: String that contains the separator between strings.
 * @n: Number of strings.
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s;

	va_start(args, n);
	for (; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
