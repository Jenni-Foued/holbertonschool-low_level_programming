#include "function_pointers.h"

/**
 * int_index - Search for the posistion of
 * an element in array that meet the condition in the cmp function.
 * @array: Array address.
 * @size: Array size.
 * @cmp: Address of function called.
 * Return: integer.
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp && size > 0)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
