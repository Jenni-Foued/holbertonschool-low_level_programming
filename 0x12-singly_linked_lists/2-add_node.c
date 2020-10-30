#include "lists.h"
#include <stdlib.h>

/**
 * add_node - Add a new node at the beginning of a list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 * Return: Address of the new node.
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->str = strdup(str);
	temp->len = length;
	temp->next = *head;
	*head = temp;
	return (*head);
}
