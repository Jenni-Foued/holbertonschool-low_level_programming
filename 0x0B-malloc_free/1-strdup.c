#include "holberton.h"
#include <stdlib.h>

/**
 *_strdup - allocate a string.
 *@str: string.
 *Return: pointer to string if success.
 */

char *_strdup(char *str)
{
	int i = 0;
	char *strcp;

	while (str[i])
		i++;
	if (i < 1)
		return (NULL);
	strcp = malloc(sizeof(char) * i);
		if (strcp == NULL)
			return (NULL);

	i = 0;
	while (str[i])
	{
		strcp[i] = str[i];
		i++;
	}
	strcp[i] = '\0';
	return (strcp);
}
