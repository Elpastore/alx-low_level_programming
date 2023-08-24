#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements
 * @h: pointer to linked list
 * Return: nummber of elements
 */
size_t list_len(const list_t *h)
{
	size_t num_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			return (-1);

		h = h->next;
		num_node++;
	}
	return (num_node);
}
