#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * free_listint_safe - frees a listint_t linked list.
 * @h: pointer to the head of the list
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    size_t size = 0;
    listint_t *current = *h;
    listint_t *temp;

    while (current != NULL)
    {
        size++;
        temp = current;
        current = current->next;

        /*Check if the current node has already been visited*/
        if (temp->next == temp)
        {
            free(temp);
            *h = NULL; /*Set head to NULL after freeing the node*/
            return size;
        }

        /*Mark the current node as visited*/
        temp->next = temp;
        free(temp);
    }

    *h = NULL; /*Set head to NULL after freeing the list*/
    return size;
}

