#include "lists.h"
/**
 * free_dlistint -function that free a list
 * @head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
