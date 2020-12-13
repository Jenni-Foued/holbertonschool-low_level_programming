#include "lists.h"

/**
 *dlistint_len - Count the number of elements in a list.
 *
 *@h: Pointer to the first node of the list.
 *
 *Return: Number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
