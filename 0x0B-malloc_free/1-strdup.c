#include "holberton.h"
#include <stdlib.h>

/**
 *_strdup - allocate a string.
 *@str: string.
 *Return: pointer to string if success.
 */

char *_strdup(char *str)
{
	long int i;
	char *strcp;

	if (str[0] == '\0')
		return (NULL);

	for (i = 0; str[i]; i++);
	strcp = malloc(sizeof(char) * (i + 1));

	if (strcp == NULL)
		return (NULL);
	
	for (i = 0; str[i]; i++)
		strcp[i] = str[i];
	strcp[i] = '\0';
	return (strcp);
	free(strcp);
}
