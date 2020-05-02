#include "lists.h"
/**
 * get_dnodeint_at_index - Get a node at a given index
 * @head: The head of the linked list
 * @index: The index in which the node is located
 * Return: The address of the node or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int pos = 0;

	while (tmp != NULL)
	{
		if (pos == index)
		{
			return (tmp);
		}

		tmp = tmp->next;
		pos++;
	}

	return (NULL);
}
