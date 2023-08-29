#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: the head of list
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	const listint_t *current = head;
	const listint_t *check = head;

	while (check != NULL && check->next != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node++;

		current = current->next;
		check = check->next->next;

		if (current == check)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			node++;
			printf("-> [%p] %d\n", (void *)check->next, check->next->n);
			exit(98);
		}
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		node++;
		head = head->next;
	}
	return (node);
}
