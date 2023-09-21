#include "lists.h"


/**
 * add_node - adds a new node a the beginning of a list
 * @head: the pointer to the begining of the list
 * @str: the string to be added
 * Return: the address to the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int i;
	int n = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		n++;

	node->len = n;
	node->next = *head;
	*head = node;

	return (*head);
}
