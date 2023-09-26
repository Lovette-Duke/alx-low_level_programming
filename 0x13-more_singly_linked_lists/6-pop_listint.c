#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: the pointer to the pointer to the head of the linked list
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (n);
}
