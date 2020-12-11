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
	unsigned int counter = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp)
	{
		printf("%u\n", temp->n);
		counter++;
		temp = temp->next;
	}
	return (counter);
}
