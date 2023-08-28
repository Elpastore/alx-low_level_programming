#include "lists.h"
/**
 * get_nodeint_at_index -returns the nth node of a listint_t linked list.
 * @head: head of list
 * @index: th nth node
 * Return: the nth node if exist or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int n = 0;

	while (current != NULL)
	{
		if (n == index)
		{
			return (current);
		}
		current = current->next;
		n++;
	}
	if (current == NULL)
		return (NULL);

	return (current);
}
