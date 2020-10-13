#include "holberton.h"
#include <stdlib.h>

/**
 *create_array - allocate an array.
 *@size: size of arrray.
 *@c: char.
 *Return: pointer to char if success.
 */

char *create_array(unsigned int size, char c)
{
	char *tmp;

	if (size == 0)
		return (NULL);
	tmp = malloc(sizeof(char) * size);
	return (tmp);
}
