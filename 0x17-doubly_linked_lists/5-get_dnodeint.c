#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: pointer to the first node of the list.
 * @index: is the index of the node, starting from 0
 *
 * Return: the node at the index position.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while ((counter < index) && head)
	{
		head = head->next;
		counter++;
	}
	if (counter < index)
		return (NULL);
	return (head);
}
