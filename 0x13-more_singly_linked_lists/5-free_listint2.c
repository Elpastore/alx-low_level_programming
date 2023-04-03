#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
