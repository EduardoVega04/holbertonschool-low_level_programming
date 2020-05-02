#include "lists.h"
/**
 * add_dnodeint_end - Adds a node at the end of the linked list
 * @head: The head of the linked list
 * @n: Data to put in the new node
 * Return: The address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *prev_tmp = *head;
	dlistint_t *tmp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tmp = (*head)->next;

	while (tmp != NULL)
	{
		prev_tmp = prev_tmp->next;
		tmp = tmp->next;
	}

	prev_tmp->next = new_node;
	new_node->prev = prev_tmp;

	return (new_node);
}
