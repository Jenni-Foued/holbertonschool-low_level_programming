#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_list(list_t *head)
{
	list_t *temp, *temp2;

	temp = head;
	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp->str);
		free(temp);
		temp = temp2;
	}
}
