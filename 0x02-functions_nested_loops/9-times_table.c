#include "holberton.h"

/**
	* times_table - print the 9 times table, starting with 0.
 *
	* Return: (void) .
**/
void times_table(void)
{
int i, j, n;


for (i = 0; i < 10; i++)
{
_putchar(0 + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
for (j = 1; j < 10; j++)
{
n = i * j;
if (n > 9)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else
{
_putchar(n + '0');
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
if ((i * (j + 1)) < 10)
{
_putchar(' ');
}
}
}
_putchar('\n');
}
}
