#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all elements of a list_t
 * @h:pointer to singly linked list
 * Return: the number if nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		h = h->next;
	}
	return (count);
}
