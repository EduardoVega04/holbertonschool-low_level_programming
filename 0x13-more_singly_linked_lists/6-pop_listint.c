#include "lists.h"

/**
 * pop_listint - function to remove the head node of a list
 * @head: pointer to the pointer of the list
 * Return: the value stored in the head node or 0 if empty
 */
int pop_listint(listint_t **head)
{
	int x;

	listint_t *node_to_delete;
	listint_t *next_node;

	if (*head == NULL)
		return (0);

	node_to_delete = *head;
	next_node = (*head)->next;

	x = node_to_delete->n;
	*head = next_node;
	free(node_to_delete);

	return (x);
}
