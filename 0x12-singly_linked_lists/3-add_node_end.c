#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list list_t
 * @head: pointer to the list
 * @str: the string to be added
 * Return: address of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp;
	unsigned int i;
	unsigned int n = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		n++;
	node->len = n;
	node->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}
	return (*head);
}
