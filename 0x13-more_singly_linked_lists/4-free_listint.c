#include "lists.h"

/**
 * free_listint -function that frees a listint_t list.
 * @head: a pointer to list
 */
void free_listint(listint_t *head)
{
	listint_t *current; /*pointer to save each node*/

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
