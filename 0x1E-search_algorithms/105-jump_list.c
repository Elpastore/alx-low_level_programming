#include "search_algos.h"
#include <math.h>
/**
 * jumped - function to move through list in a specific range
 * @list:  pointer to the head of the list
 * @end: the end of the range
 * Return: pointer to the first node where value is located
 */
listint_t *jumped(listint_t *list, size_t end)
{
	while (list->next != NULL && list->index < end)
		list = list->next;
	return (list);
}
/**
 * jump_list - jump search algorithm using linked list
 * @list: pointer to the head of the list
 * @size: number of nodes in list
 * @value: value to search for
 * Return: pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *left, *right;
	size_t jump = sqrt(size);

	if (list == NULL || list->next == NULL || size == 0)
		return (NULL);

	left = list;
	right = jumped(left, jump);

	printf("Value checked at index [%ld] = [%d]\n", right->index, right->n);
	while (right->index < (size - 1) && right->n < value)
	{
		left = right;
		right = jumped(left, right->index + jump);
		printf("Value checked at index [%ld] = [%d]\n", right->index, right->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			left->index, right->index);
	printf("Value checked at index [%ld] = [%d]\n", left->index, left->n);
	while (left->index < size - 1  && left->n < value)
	{
		left = left->next;
		printf("Value checked at index [%ld] = [%d]\n", left->index, left->n);
	}

	if (left != NULL && left->n == value)
		return (left);
	return (NULL);
}

