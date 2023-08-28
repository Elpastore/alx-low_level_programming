#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: head of list
 * Return: the head node's
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	head_node = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (head_node);
}
