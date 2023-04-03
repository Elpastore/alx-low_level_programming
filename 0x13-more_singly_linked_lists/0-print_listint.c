#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: a pointer
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_node = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		printf("\n");
		num_node++;
		h = h->next;
	}
	return (num_node);
}
