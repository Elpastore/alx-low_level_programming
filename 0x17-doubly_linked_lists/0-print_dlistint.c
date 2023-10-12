#include "lists.h"

/**
 * print_dlistint - function that print all element
 * @h: the header pointer
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}
	return (numb);
}
