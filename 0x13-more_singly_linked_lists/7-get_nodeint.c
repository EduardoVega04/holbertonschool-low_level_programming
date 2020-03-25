#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: of list
 * @index: index of the node
 * Return: nth node of a list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count = 0;

	node = head;
	if (node != NULL)
	{
		while (node)
		{
			if (index == count)
				return (head);

			node = node->next;
			head = node;
			count++;
		}
	}
	else
	{
		return (NULL);
	}

	return (node);
}
