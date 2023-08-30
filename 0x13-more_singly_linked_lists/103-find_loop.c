#include "lists.h"
/**
 * find_listint_loop -  finds the loop in a linked list.
 * @head: pointer to the head of the list
 * Return: the address of the starting loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (hare == tortoise)
			break;
	}
	if (hare == NULL || hare->next == NULL)
		return (NULL);

	tortoise = head;
	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}
	return (hare);
}
