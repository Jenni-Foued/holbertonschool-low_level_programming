#include "holberton.h"

/**
 * print_alphabet - print alphabet [a..z]
 *
	* Return: - always (0)
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
