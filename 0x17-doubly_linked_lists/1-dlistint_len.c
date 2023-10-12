#include "lists.h"

/**
 *  dlistint_len - function that give the number of element
 *  @h: head pointer
 *  Return: the number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		h = h->next;
		numb++;
	}
	return (numb);
}
