# include "holberton.h"
# include <stdlib.h>

/**
 *str_concat - concat 2 strings.
 *@s1: first string.
 *@s2: second string.
 *Return: pointer to string.
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;

	for (i = 0; s1[i]; i++)
	;

	for (j = 0; s2[j]; j++)
	;

	s = (char *) malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j])
	{
		s[i] = s2[j];
		j++;
		i++;
	}
	s[i] = '\0';
	return (s);
}
