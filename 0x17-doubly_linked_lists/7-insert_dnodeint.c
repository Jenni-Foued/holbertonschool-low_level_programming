#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: pointer to the first node of the list.
 * @idx: the position to insert the new node in.
 * @n: data to be inserted in the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 0;
	dlistint_t *temp, *new_node;


	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while ((counter < (idx - 1)) && temp)
	{
		temp = temp->next;
		counter++;
	}

	if (counter < idx - 1)
		return (NULL);

	if ((counter == idx - 1) && (temp->next == NULL))
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}
