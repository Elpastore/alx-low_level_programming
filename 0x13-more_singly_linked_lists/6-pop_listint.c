#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to list
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	value = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (value);
}
