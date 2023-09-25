#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: the pointer to the pointer to the next node
 * @n: the data added to the linked list
 * Return: address of the new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
