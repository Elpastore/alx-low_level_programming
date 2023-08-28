#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: the list
 * Return: return the number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
