#include "holberton.h"

/**
 * rev_string - reverse a string.
 *
 *@s: the string to be reversed.
 */

void rev_string(char *s)
{
	int i;
	char *s_rev = "";
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (i = length; i >= 0; i--)
	{
		s_rev[i] = s[i];
	}
	s = "";
	for (i = 0; s_rev[i] != '\0' ; i++)
	{
		s[i] = s_rev[i];
	}
}
