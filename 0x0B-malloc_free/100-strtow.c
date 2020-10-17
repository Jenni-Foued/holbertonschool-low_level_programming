#include "holberton.h"
#include <stdlib.h>

/**
*count - Count words in a string.
*@str: String address.
*Return: Number of words in a string (Integer).
*/

int count(char *str)
{
	int i = 0, words = 0;

	while (str[i] == ' ')
		i++;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == '\0' || str[i + 1] == ' '))
			words++;
		i++;
	}
	return (words);
}

/**
 *strtow - Copy each word of a string into an array of strings(words).
 *@str: String address.
 *Return: Array of strings address.
 */

char **strtow(char *str)
{
	char **tab;
	int words, i = 0, j, c = 0, k;

	words = count(str);
	if (words == 0)
		return (NULL);

	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (tab == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
			;
			tab[c] = (char *)malloc((j + 1) * sizeof(char));
			if (tab[c] == NULL)
			{
				for (k = 0; k < c; k++)
					free(tab[k]);
				free(tab);
				return (NULL);
			}
			for (k = 0; k < j; k++)
				tab[c][k] = str[i + k];
			tab[c][k] = '\0';
			c++;
			i += j;
		}
		else
			i++;
	}

	tab[words] = NULL;
	return (tab);
}
