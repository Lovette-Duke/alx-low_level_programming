#include "lists.h"

/**
 * free_list - frees the list_t list
 * @head: the pointer to the begining of the linked list
 * Return: None
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		if (head->str != NULL)
			free(head->str);
		free(head);
	}
}
