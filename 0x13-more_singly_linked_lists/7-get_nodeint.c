#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: the head of the linked list
 * @index: the node to be returned
 * Return: nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node = head;

	for (i = 0; node && i < index; i++)
		node = node->next;

	if (node == NULL)
		return (NULL);
	return (node);
}
