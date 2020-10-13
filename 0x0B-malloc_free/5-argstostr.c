#include "holberton.h"
#include <stdlib.h>

/**
 *argstostr - concatinate strings into a single one.
 *@ac: number of arguments.
 *@av: pointer to arguments vector.
 *Return: pointer to string.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, T_length = 0;

	if (av == NULL || ac == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			T_length++;

	str = malloc(sizeof(char) * T_length + ac + 1);
	if (str == NULL)
		return (NULL);
	T_length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[T_length] = av[i][j];
			T_length++;
		}
		str[T_length] = '\n';
		T_length++;
	}
	str[T_length] = '\0';
	return (str);
}
