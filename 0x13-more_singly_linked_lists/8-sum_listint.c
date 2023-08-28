#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of list.
 * @head: the head of list
 * Return: the sum of all data.
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		sum = sum + (current->n);
		current = current->next;
	}
	return (sum);
}
