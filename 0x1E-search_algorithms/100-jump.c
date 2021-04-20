#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value or (-1) if value does not exist
*/

int jump_search(int *array, size_t size, int value)
{
	size_t jump, i;

	if (size > 0)
	{
		jump = 0;
		while (array[jump] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
			jump += sqrt(size);
			if (jump >= size)
				break;
		}

		i = jump - sqrt(size) + 1;
		printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

		for (; i < size && i <= jump; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
