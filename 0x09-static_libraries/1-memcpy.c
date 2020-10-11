#include "holberton.h"

/**
 *_memcpy - copy n bytes from src to dest.
 *@dest: the string to copy into it.
 *@src: the string to copy from.
 *@n: the number of bytes to copy.
 *Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
