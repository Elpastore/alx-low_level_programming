#include "lists.h"
/**
 * get_nodeint_at_index -function that returns the nth node of a list.
 * @head: the pointer to the header
 * @index: the index of the node, starting at 0
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
	if (current == NULL)
	{
		return (NULL);
	}
}
