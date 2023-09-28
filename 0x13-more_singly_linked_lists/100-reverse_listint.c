#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: the pointer to the head of a linked list
 * Return: a pointer to the 1st node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = next;
	}
	*head = prv;
	return (*head);
}
