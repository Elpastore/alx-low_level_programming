#include "lists.h"
#include <string.h>
/**
 * str_len - function that compute the lenght of string
 * @str: the string
 * Return: the lenght
 */
int str_len(const char *str)
{
	int len = 0;

	for (len = 0; str[len] != '\0'; len++)
	{

	}
	return (len);
}
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: header of new node
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *current;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = str_len(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;

		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
	}

	return (new_node);
}
