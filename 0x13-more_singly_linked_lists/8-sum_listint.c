#include "lists.h"

/**
 * sum_listint - sums all the values of a linked list
 * @head: the pointer to the head of a linked list
 * Return: the sum or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
