#include "holberton.h"

/**
 *_strspn - gets the length of a prefix substring.
 *@s: the string to search in.
 *@accept: the substring.
 *Return: unsigned int.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, n = 0, pn;
	int checker = 1;

	while (s[i] != '\0' && checker)
	{
		j = 0;
		pn = n;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			else
				j++;
		}

		if (pn == n)
			checker = 0;

		i++;
	}

	return (n);
}
