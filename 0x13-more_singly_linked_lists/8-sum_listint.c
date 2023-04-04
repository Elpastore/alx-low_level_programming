#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a list.
 * @head: the header pointer of list
 * Return: the sum of all data(n) of list
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);

	if (current == NULL)
		return (0);
}
