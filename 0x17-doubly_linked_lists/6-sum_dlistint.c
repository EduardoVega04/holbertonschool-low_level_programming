#include "lists.h"
/**
 * sum_dlistint - Sums all the data of the linked list
 * @head: The head of the linked list
 * Return: The sum of all the data or zero if it's empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int suma = 0;

	if (head == NULL)
		return (0);

	while (tmp != NULL)
	{
		suma += tmp->n;
		tmp = tmp->next;
	}

	return (suma);
}
