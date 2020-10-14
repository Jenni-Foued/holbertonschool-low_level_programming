#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocate the size of an array
 * from old_size to new_size.
 *
 * @old_size: old size of ptr.
 * @new_size: new size of ptr.
 * @ptr: array.
 * Return: address of array.
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{


	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}
	return (ptr);
}
