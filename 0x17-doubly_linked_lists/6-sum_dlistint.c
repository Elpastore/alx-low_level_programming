#include "lists.h"
/**
 * sum_dlistint -function that return the sum of all data(n)
 * @head: head pointer
 * Return: the sum of all n or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
