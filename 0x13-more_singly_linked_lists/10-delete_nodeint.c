#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a new node at a given positiion.
 * @head: First node address.
 * @idx: Position of the new node to be inserted in.
 * @n: Data of the new node.
 * Return: Address of the new node.
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *deleted_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index != 0)
	{
		temp = *head;
		for (; i < index - 1 && temp != NULL; i++)
			temp = temp->next;
		if (temp == NULL || temp->next == NULL)
			return (-1);
	}
	deleted_node = temp->next;
	temp->next = temp->next->next;
	free (deleted_node);
	return (1);
}
