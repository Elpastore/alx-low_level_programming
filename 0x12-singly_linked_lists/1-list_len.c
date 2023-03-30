#include "lists.h"
/**
 * list_len -function that returns the number of elements linked .
 * @h: pointer to list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
