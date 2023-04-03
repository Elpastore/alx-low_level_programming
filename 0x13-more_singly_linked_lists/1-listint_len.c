#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked
 * @h: a pointer
 * Return: the nulber of element
 */
size_t listint_len(const listint_t *h)
{
	size_t num_ele = 0;

	while (h != NULL)
	{
		num_ele++;
		h = h->next;
	}
	return (num_ele++);
}
