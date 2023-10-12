#include "lists.h"
/**
 * insert_dnodeint_at_index -insert new node at given position
 * @idx: position where the new node should be
 * @h: pointer of head
 * @n: data
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int position = 0;
	dlistint_t *current = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	 new_node->n = n;

	if (*h == NULL || idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		*h = new_node;
	}

	while (current != NULL && position < idx - 1)
	{
		current = current->next;
		position++;
	}
	new_node->next = current->next;
	new_node->prev = current;
	if (current != NULL)
	{
		current->next->prev =  new_node;
	}
	current->next = new_node;
	return (new_node);
}
