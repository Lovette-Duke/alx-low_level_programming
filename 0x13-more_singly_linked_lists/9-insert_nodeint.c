#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the pointer to the head of the linked list
 * @idx: the index where the new node will be inserted
 * @n: the number/value  to be inserted
 * Return: the address of the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; tmp != NULL && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
