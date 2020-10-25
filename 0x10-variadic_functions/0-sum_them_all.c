#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sum of all the parameters.
 * @n: Count of parameters.
 * Return: integer.
 **/
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	va_list args;
	unsigned int i = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (; i < n; i++)
		result += va_arg(args, int);

	va_end(args);
	return (result);
}
