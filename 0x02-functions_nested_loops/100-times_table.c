#include "holberton.h"

/**
	* print_times_table - print the n times table, starting with 0.
	* @n:the number .
	* Return: (void) .
**/
void print_times_table(int n)
{
int i, j, r;

if (((n <= 15) && (n >= 0)))
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
r = i * j;
if ((r > 9) && (r < 100))
{
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
}
else if (r < 10)
{
_putchar(r + '0');
}
else
{
_putchar((r / 100) + '0');
_putchar(((r / 10) % 10) + '0');
_putchar((r % 10) + '0');
}
if (j < n)
{
_putchar(',');
if ((i * (j + 1)) < 100 && (i * (j + 1)) >= 10)
{
_putchar(' ');
_putchar(' ');
}
else if ((i * (j + 1)) >= 100)
_putchar(' ');
else
{
_putchar(' ');
_putchar(' ');
_putchar(' ');	}	}	}
_putchar('\n');	}	}	}
