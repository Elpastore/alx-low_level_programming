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
	listint_t  *next;

	if (*head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
