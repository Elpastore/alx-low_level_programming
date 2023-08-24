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
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of list
 * @str: a string to be duplicate
 * Return: address of new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node = (list_t *)malloc(sizeof(list_t *));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = str_len(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
