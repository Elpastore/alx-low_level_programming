#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list.
 * @head: a pointer
 * @n: element of the list
 * Return: the address of new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
