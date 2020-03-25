#include "lists.h"
/**
 * delete_nodeint_at_index - delete node
 * @head: of list
 * @index: to delete node
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *node;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}

	i = 0, tmp = *head;
	while (i < index - 1 && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (i != index - 1 || tmp->next == NULL)
		return (-1);

	node = tmp->next;
	tmp->next = node->next;
	free(node);

	return (1);
}
