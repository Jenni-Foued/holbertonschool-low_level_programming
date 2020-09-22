#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
	*
 * @n: number to use.
	*
 * Return: the last digit of a number .
 */
int print_last_digit(int n)
{
if (n < 0)
{
_putchar((((n * -1) % 10) + '0'));
return (((n * -1)) % 10);
}
else if (n > 0)
{
_putchar((n % 10) + '0');
return (n % 10);
}
else
{
_putchar(n + '0');
return (0);
}
}
