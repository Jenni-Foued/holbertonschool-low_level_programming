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
	skiplist_t *ptr;

	if (list)
	{
		ptr = list->express;
		printf("Value checked at index [%lu] = [%d]\n", ptr->index, ptr->n);

		while (ptr && ptr->n < value)
		{
			list = ptr;
			ptr = ptr->express;
			if (ptr == NULL)
				break;
			printf("Value checked at index [%lu] = [%d]\n", ptr->index, ptr->n);
		}
		if (ptr == NULL)
		{
			ptr = list;
			while (ptr->next)
				ptr = ptr->next;
		}
		printf("Value found between indexes [%lu] and [%lu]\n"
				, list->index, ptr->index);
		while (list && list->n <= ptr->n)
		{
			printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
			if (list->n == value)
				return (list);
			list = list->next;
		}
	}
	return (NULL);
}
