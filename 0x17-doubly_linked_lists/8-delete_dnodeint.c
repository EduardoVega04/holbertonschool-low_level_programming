#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete a node at a given index
 * @head: The head of the linked list
 * @index: The index of the linked list
 * Return: 1 if deleted, -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *aux;


	if (head == NULL || *head == NULL)
		return (-1);
	aux = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(aux);
		return (1);
	}
	while (index > 1 && aux != NULL && aux->next != NULL)
	{
		aux = aux->next;
		index--;
	}
	if (aux->next == NULL)
		return (-1);
	tmp = aux->next;
	aux->next = tmp->next ? tmp->next : NULL;
	if (tmp->next != NULL)
		tmp->next->prev = aux;
	free(tmp);
	return (1);
}

