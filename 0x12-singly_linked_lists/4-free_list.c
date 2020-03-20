#include "lists.h"
/**
 * free_list - frees a list_t t
 * @head: pointer to the list_t.
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *node = head;
	list_t *next;

	while (node != NULL)
	{
		next = node->next;
		free(node->str);
		free(node);
		node = next;
	}
}
