#include "lists.h"
/**
 * get_dnodeint_at_index - function that return the nth node
 * @head: pointer to head
 * @index: the index to reach
 * Return: the nth node or NULL if does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
