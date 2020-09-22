#include "holberton.h"

/**
	* times_table - print the 9 times table, starting with 0.
 *
	*
	* Return: (void) .
**/
void times_table(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if ((i * j) == 0)
{
_putchar(0 + '0');
}
else if (((i * j) > 0) && ((i * j) < 10))
{
_putchar(((i * j) % 10) + '0');
}
else
{
_putchar(((i * j) / 10) + '0');
_putchar(((i * j) % 10) + '0');
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
if ((i * j) < 9)
{
_putchar(' ');
}
}
}
_putchar('\n');
}
}
