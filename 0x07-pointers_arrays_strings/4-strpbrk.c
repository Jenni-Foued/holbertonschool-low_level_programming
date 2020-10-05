#include "holberton.h"

/**
 *_strpbrk - return the first occurence of a string's char in a string.
 *@s: the first string.
 *@accept: the second string.
 *Return: char.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (accept[j] == s[i])
				return (s + i);
			j++;
		}

		i++;
	}
	return ('\0');
}
