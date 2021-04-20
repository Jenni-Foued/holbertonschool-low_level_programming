#include "search_algos.h"

/**
 * print_array - print the current part of the array being searched
 *
 * @array: pointer to the first element of the array
 * @start: the first element of the array to print
 * @end: the last element of the array to print
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: %d", array[start]);
	start++;
	while (start <= end)
	{
		printf(", %d", array[start]);
		start++;
	}
	printf("\n");
}

/**
 * bin_search - searches for a value in a sorted array of integers
 *  using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @start: starting index to start the search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value or (-1) if value does not exist
*/
int bin_search(int *array, size_t start, size_t size, int value)
{
	size_t l_index, r_index, m_index;

	if (size > 0)
	{
		l_index = start;
		r_index = size - 1;
		print_array(array, l_index, r_index);
		while (l_index <= r_index)
		{
			m_index = (l_index + r_index) / 2;
			if (array[m_index] < value)
				l_index = m_index + 1;
			else if (array[m_index] > value)
				r_index = m_index - 1;
			else
				return (m_index);
			if (l_index <= r_index)
				print_array(array, l_index, r_index);
		}
	}
	return (-1);
}


/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value or (-1) if value does not exist
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, minimum;

	if (size == 0)
		return (-1);
	while ((bound < size) && (array[bound] < value))
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	if (size > bound)
		minimum = bound + 1;
	else
		minimum = size;
	printf("Value found between indexes [%ld] and [%ld]\n"
			, bound / 2, minimum - 1);
	return (bin_search(array, bound / 2, minimum, value));
}
