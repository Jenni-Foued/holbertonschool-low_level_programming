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

	if (n == 0 && index != 0)
		return (-1);
	else if (n == 0 && index == 0)
	{
		return (0);
	}
	else if ( n == 1 && index == 0)
		return (1);
	
	for (; i < index; i++)
	{
		n >>=  1;
		if (n == 0)
			return (-1);
	}

	n %= 2;
	return (n);
}
