#include "holberton.h"
#include <stdlib.h>

/**
 * create_tab - Create an array of strings.
 * @tab: Address of array tab.
 * @pos: Position in string where to start copying.
 * @str: Address of the string to use.
 * Return: Address of array.
 **/

char *create_tab(char *tab, char *str, int pos)
{
	int i, lw = 1;

	for (i = pos; str[i] != ' ' && str[i]; i++)
		lw++;

	tab = malloc(sizeof(char) * lw);
	if (tab == NULL)
	{
		free(tab);
		return (NULL);
	}

	for (i = 0; str[pos] != ' ' && str[pos] != '\0'; pos++)
	{	tab[i] = str[pos];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
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
	int words = 0, i, pos = 0;
/* Check if the string is empty. */
	if (str == NULL)
		return (NULL);
/* Allocate an array */
	words = count(str);
	tab = (char **) malloc(sizeof(char) * words + 1);
	if (tab == NULL)
		return (NULL);
/* Copy the string str's content into the array tab */
	for (i = 0; i < words; i++)
	{
		while (str[pos] == ' ')
			pos++;
		tab[i] = create_tab(tab[i], str, pos);
		if (tab[i] == NULL)
		{
			for (; i >= 0; i--)
				free(tab[i]);
			free(tab);
		}
	}
	tab[i] = malloc(sizeof(char));
	tab[i] = NULL;
	return (tab);
}
