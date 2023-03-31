#include "lists.h"
/**
 * len_str - function that compute the lenght of string
 * @str: the string
 * Return: the lenght
 */
int len_str(const char *str)
{
	int len = 0;

	for (len = 0; str[len] != '\0'; len++)
	{

	}
	return (len);
}
/**
 * add_node_end - function that adds a new node
 * @str: a string
 * @head: address memory of new node
 * Return: address of new element;or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
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
	new_node->str = strdup(str);
	new_node->len = len_str(str);
	new_node->next = NULL;
	if (!*head)
		*head = new_node;

	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (*head);
}
