#include "holberton.h"

/**
 * print_number - print an integer using "_putchar".
 *
 * @n: the integer to print.
 *
 */

void print_number(int n)
{
int s;

s = 1;
if (n < 0)
{
s = -1;
}
n = n *s;
if (n >= 10000)
{
_putchar(((n / 10000) * s) +'0');
_putchar(((n % 10000) / 1000) + '0');
_putchar(((n % 1000) / 100) + '0');
_putchar(((n % 100) / 10) + '0');
_putchar((n % 10) + '0');
}
else if (n < 10000 && n >= 1000)
{
_putchar((((n % 10000) / 1000) * s) +'0');
_putchar(((n % 1000) / 100) + '0');
_putchar(((n % 100) / 10) + '0');
_putchar((n % 10) + '0');
}
else if (n < 1000 && n >= 100)
{
_putchar((((n % 1000) / 100) * s) +'0');
_putchar(((n % 100) / 10) + '0');
_putchar((n % 10) + '0');
}
else if (n < 100 && n >= 10)
{
_putchar((((n % 100) / 10) * s) +'0');
_putchar((n % 10) + '0');
}
else
{
_putchar(n + '0');
}
}
