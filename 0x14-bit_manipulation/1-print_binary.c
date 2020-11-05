#include "holberton.h"

/**
 * print_binary - Print binary code of an unsigned long int (n).
 * @n: Number to print in binary.
 **/

void print_binary(unsigned long int n)
{
	int i = 0;
	char res[33];

	if (n == 0)
		_putchar('0');

	for (; n > 0; i++)
	{
		if ((n & 1) == 1)
			res[i] = '1';
		else
			res[i] = '0';
		n >>= 1;
	}
	res[i] = '\0';
	i--;
	for (; i >= 0; i--)
		_putchar(res[i]);
}
