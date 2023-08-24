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
		if (h->str == NULL)
		{
			printf("[%d] (nill)\n", count);
		}

		printf("[%d] %s\n", count, h->str);
		count++;
		h = h->next;

	}
	return (count);
}
