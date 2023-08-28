#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of list
 * @head: the head of list
 * @index: position
 * Return: 1 if successfull, otherwise -1;
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *delete;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		delete = *head; /* to store the address where head point*/
		*head = (*head)->next;/*set the new address where head will point*/
		free(delete);/*free the previous address*/
		return (1);
	}
	current = *head;
	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL  || current->next == NULL)
		return (-1);
	delete = current->next;/*store the address where current is pointing*/
	current->next = delete->next;/*set the new adress*/
	free(delete);/*delete the previous adress*/
	return (1);

}
