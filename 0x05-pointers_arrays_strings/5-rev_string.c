#include "holberton.h"

/**
 * rev_string - reverse a string.
 *
 *@s: the string to be reversed.
 */

void rev_string(char *s)
{
	int i, j = 0;
	char var1, var2;

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}

	i = 0;

	while (j > i)
	{
		var1 = s[i];
		var2 = s[j];
		s[i] = var2;
		s[j] = var1;
		j--;
		i++;
	}
}
