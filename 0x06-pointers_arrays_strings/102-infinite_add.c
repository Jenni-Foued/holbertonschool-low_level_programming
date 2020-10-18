#include "holberton.h"
/**
 * length - Calculate the length of a string.
 * @n: String address.
 * Return: integer.
 **/
int length(char *n)
{
	int i = 0;

	while (n[i])
		i++;
	i--;
	return (i);
}
/**
 *infinite_add - add two numbers.
 *
 *@n1: first number.
 *@n2: second number.
 *@r: result.
 *@size_r: result size.
 *Return: the addition of n1 and n2.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int add = 0, len1, len2, s;

	len1 = length(n1);
	len2 = length(n2);
	s = size_r - 1;
	r[s] = '\0';
	s--;
	for (; s >= 0; s--, len1--, len2--)
	{
		if (len1 >= 0)
		{
			add += n1[len1] - '0';
		}
		if (len2 >= 0)
		{
			add += n2[len2] - '0';
		}
		if ((len1 < 0 && len2 < 0) && add == 0)
			break;
		r[s] = (add % 10) + '0';
		add /= 10;
	}
	if (len1 >= 0 || len2 >= 0 || add)
		return (0);
	return (r);
}
