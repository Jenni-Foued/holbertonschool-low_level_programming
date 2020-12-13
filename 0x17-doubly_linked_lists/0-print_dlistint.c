#include "lists.h"

/**
 * print_dlistint - Print all elements of a doubly linked list.
 *
 * @h: Pointer to the first node of the list.
 *
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
