#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: list head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (*head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
