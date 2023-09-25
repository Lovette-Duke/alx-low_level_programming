#include "lists.h"

/**
 * free_listint - frees up the space allocated by malloc
 * @head: the pointer to the head of the linked list
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
