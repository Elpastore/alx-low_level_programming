#include "lists.h"
/**
 * add_node - function that adds a new node
 * @str: a string
 * @head: address memory of new node
 * Return: address of new element;or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
	}
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
