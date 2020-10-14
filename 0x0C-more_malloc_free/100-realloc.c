#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block.
 * @old_size: old size of ptr.
 * @new_size: new size of ptr.
 * @ptr: array.
 * Return: address of array.
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i, n;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	else
		n = new_size;

	for (i = 0; i < n; i++)
	{
		new_ptr[i] = ((char *)ptr)[i];
	}
	free(ptr);
	ptr = new_ptr;
	return (ptr);
}
