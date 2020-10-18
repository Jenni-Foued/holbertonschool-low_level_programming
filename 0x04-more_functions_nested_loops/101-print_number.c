#include "holberton.h"

/**
 * print_number - print an integer using "_putchar".
 *
 * @n: the integer to print.
 *
 */

void print_number(int n)
{
	int x, i = 1;

	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}
	x = n;
	if (n == 0)
		_putchar('0');
	else
	{
		while (x > 9)
		{
			i *= 10;
			x /= 10;
		}
		while (i > 1)
		{
			_putchar((n / i) + '0');
			n %= i;
			i /= 10;
		}
		_putchar(n + '0');
	}
}
