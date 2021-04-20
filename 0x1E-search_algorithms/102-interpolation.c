#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value or (-1) if value does not exist
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (size > 0 && array)
	{
		while ((array[high] != array[low]) && (value >= array[low]))
		{
			pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
			if (pos > high)
			{
				printf("Value checked array[%ld] is out of range\n", pos);
				return (-1);
			}
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			if (array[pos] < value)
				low = pos + 1;
			else if (value < array[pos])
				high = pos - 1;
			else
				return (pos);
		}
		if (value == array[low])
			return (low);
	}
	return (-1);
}
