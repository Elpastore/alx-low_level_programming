#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to a pointer to the first node of the list
 * @idx: Index where the new node should be added
 * @n: Value to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new_node, *current;
	size_t num_ele = 0;

	while (*head != NULL)
	{
		num_ele++;
		*head = (*head)->next;
	}

	if (idx > num_ele)
	{
		return (NULL);
	}
	else
	{
		current = *head;
		while (i < idx)
		{
			current = current->next;
			i++;
		}
		new_node = malloc(sizeof(listint_t));
		new_node->n = n;
		new_node->next = current->next;
		current->next = new_node;
		return (current);
	}
}
