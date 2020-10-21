#include "function_pointers.h"

/**
 * array_iterator - Call for another function for each element of an array.
 * @array: Array address.
 * @size: Array size.
 * @action: Function address.
 **/

void array_iterator(int *array, int size, void (*action)(int))
{
	int i = 0;

	for (; i < size; i++)
		action(array[i]);
}
