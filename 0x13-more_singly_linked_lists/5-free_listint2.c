#include "lists.h"

/**
 * free_listint2 - frees up the space allocated by malloc
 * @head: the pointer to the pointer to the head of the linked list
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	head = NULL;
}
