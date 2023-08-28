#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint -  reverses a listint_t linked list.
 * @head: the head of list
 * Return: pointer to the first
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;
	listint_t  *current = *head;

	if (*head == NULL)
		return (NULL);
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
