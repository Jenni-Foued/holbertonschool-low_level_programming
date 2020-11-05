#include "holberton.h"
/**
 * print_binary - Print a number in binary code.
 * @n: Number to be printed.
 **/

void print_binary(unsigned long int n)
{

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
