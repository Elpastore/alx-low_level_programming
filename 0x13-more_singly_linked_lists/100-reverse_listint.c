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
		next = (*head)->next; /*Store the next node*/
		(*head)->next = prev; /*Reverse the pointer*/
		prev = *head; /*Move prev one step ahead*/
		*head = next; /*Move head one step ahead*/
	}
	*head = prev;
	return (*head);
}
