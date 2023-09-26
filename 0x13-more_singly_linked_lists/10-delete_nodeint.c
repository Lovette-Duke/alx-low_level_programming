#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at an index of a linked list
 * @head: the pointer to the head of a linked list
 * @index: the index to be deleted on the list
 * Return: 1 if it succeeds or -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node = NULL;
	listint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (tmp == NULL || (tmp->next) == NULL)
			return (-1);
		tmp = tmp->next;
	}
	node = tmp->next;
	tmp->next = node->next;
	free(node);

	return (1);
}
