#include "holberton.h"

/**
 * print_line - print "_"  * n times.
 *
 * @n: number of times to print "_".
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (n > 0 && i <= n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
