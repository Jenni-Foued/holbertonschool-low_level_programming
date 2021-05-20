#include "holberton.h"

/**
 *_memset - insert n times the content of b into s.
 *@s: the string to insert in it.
 *@b: the string to insert.
 *@n: number of time to insert.
 *Return: string.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
