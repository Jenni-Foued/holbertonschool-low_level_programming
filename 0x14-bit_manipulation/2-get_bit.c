#include "holberton.h"

/**
 * get_bit - Target the bit of a number at the index position.
 * @n: Given number.
 * @index: Given index.
 * Return: Positive number if success (0,1) or -1 if it fails.
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	for (; i < index && (n != 1 || n != 0); i++)
	{
		n >>=  1;
		if (n == 0 && i)
			return (-1);
	}
	if (i == index)
		n %= 2;
	return (n);
}
