#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete a node at a given index
 * @head: The head of the linked list
 * @index: The index of the linked list
 * Return: 1 if deleted, -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *prev_tmp = *head;
	unsigned int pos = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if(*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp != NULL && pos != index)
	{
		pos++;
		prev_tmp = tmp;
		tmp = tmp->next;
	}

	if (pos == index)
	{
		if(tmp != NULL)
			tmp = tmp->next;

		free(prev_tmp->next);
		prev_tmp->next = tmp;

		if (tmp != NULL)
			tmp->prev = prev_tmp;

		return (1);
	}
	return (-1);
}

