#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_list(const list_t *h)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = h;
	while (temp)
	{
		if (temp->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		counter++;
		temp = temp->next;
	}
	return (counter);
}
