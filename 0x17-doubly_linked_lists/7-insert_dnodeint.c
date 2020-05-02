#include "lists.h"
/**
 * insert_dnodeint_at_index - check the code for Holberton School students.
 * @h: Head of the linked list
 * @idx: Index to insert the node
 * @n: Data to put in the node
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *tmp = *h, *prev_tmp = *h;
	unsigned int pos = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}

	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (tmp != NULL)
	{
		if (pos == idx)
		{
			prev_tmp->next = new_node;
			new_node->prev = prev_tmp;
			new_node->next = tmp;
			tmp->prev = new_node;
			return (new_node);
		}

		pos++;
		prev_tmp = tmp;
		tmp = tmp->next;
	}
	prev_tmp->next = new_node;
	new_node->prev = prev_tmp;
	return (new_node);
}

