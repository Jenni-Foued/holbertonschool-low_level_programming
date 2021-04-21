#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * using linear search algorithm
 *
 * @list: pointer to the head of the skip list to search in
 * @value:  value to search for
 *
 * Return:  pointer on the first node where value is located
 *  or NULL if it fails
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *first, *second;

	if (list)
	{
		first = list;
		second = list->express;
		while (second && second->n < value && second->express)
		{
			printf("Value checked at index [%lu] = [%d]\n", second->index, second->n);
			first = second;
			second = second->express;
		}
		printf("Value found between indexes [%lu] and [%lu]\n"
				, first->index, second->index);
		while (first->n < value && first->next)
		{
			printf("Value checked at index [%lu] = [%d]\n", first->index, first->n);
			first = first->next;
		}
		printf("Value checked at index [%lu] = [%d]\n", first->index, first->n);
		if (first->n == value)
			return (first);
	}
	return (NULL);
}
