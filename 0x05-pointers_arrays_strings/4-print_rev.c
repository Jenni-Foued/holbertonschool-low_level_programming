#include "holberton.h"

/**
 * print_rev - print a string in reverse.
 *
 *@s: the string to print in reverse.
 *
 */

void print_rev(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
