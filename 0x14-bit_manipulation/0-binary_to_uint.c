#include "holberton.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Address of a string that contains binary code.
 * Return: unsigned int.
 **/

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int multiplier = 1, res = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i--;
	while (i >= 0)
	{
		res += ((b[i] - '0') * multiplier);
		multiplier *= 2;
		i--;
	}
	return (res);
}
