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
	int i = 0, j = 0;

	if (s1 != NULL)
		for (; s1[i]; i++)
		;
	if (s2 != NULL)
		for (; s2[j]; j++)
		;

	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		j++;
		i++;
	}
	s[i] = '\0';
	return (s);
}
