#include "search_algos.h"
#include <unistd.h>
/**
 * print_array - print the current part of the array being searched
 *
 * @array: pointer to the first element of the array
 * @first: index of the first element to print
 * @last: index of the last element to print
 */
void print_array(int *array, size_t first, size_t last)
{
	printf("Searching in array: %d", array[first]);
	first++;
	while (first <= last)
	{
		printf(", %d", array[first]);
		first++;
	}
	printf("\n");
}

/**
 * advanced_binary_search - searches for a value in a sorted array of integers
 * using the advanced_binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @start: first element
 * @end: number of elements in array
 * @value: value to search for
 *
 * Return: first position of value in array
 */

int advanced_binary_search(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	if (end >= start)
	{
		print_array(array, start, end);

		if (array[start] == value)
			return (start);

		mid = (start + end) / 2;

		if (array[mid] == value && array[mid - 1] != value)
			return (mid);
		if (array[mid] >= value)
			return (advanced_binary_search(array, start, mid, value));
		if (array[mid] < value)
			return (advanced_binary_search(array, mid + 1, end, value));
	}
	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the advanced_binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value or (-1) if value does not exist
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (size > 0)
		return (advanced_binary_search(array, 0, size - 1, value));
	return (-1);
}
