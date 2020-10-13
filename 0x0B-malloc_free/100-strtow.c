#include "holberton.h"
#include <stdlib.h>

/**
*count - count words in str.
*@str: string.
*Return: Number of words in str.
*/

int count(char *str)
{
int i = 0, word = 0;
	if (str[i] == ' ')
		while (str[i] == ' ')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			word++;
		i++;
	}
	return (word);
}

/**
 *strtow - copy each word of a string into an array of strings(words).
 *@str: pointer to string.
 *Return: pointer to array of strings.
 */

char **strtow(char *str)
{	char **tab;
	int words = 0, i = 0, lw, j = 0, k = 0, n;

	if (str == NULL)
		return (NULL);
	words = count(str);
	tab =  malloc(sizeof(char) * words);
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < words; i++)
	{	lw = 0;
		n = 0;
		for (; str[j] == ' ' ; j++)
		;
		while (str[j] && *str != ' ')
		{	lw++;
			j++;
		}
		lw++;
		tab[i] = malloc(sizeof(char) * lw);
		if (tab[i] == NULL)
		{
			for (; i >= 0; i--)
				free(tab[i]);
			free(tab);
			return (NULL);
		}
		for (; str[k] != ' ' ; k++)
		;
		while (str[k] && str[k] != ' ')
		{	tab[i][n] = str[k];
			k++;
			n++;
		}
		tab[i][n] = '\0';
	}
	return (tab);
}
