#include "lists.h"
/**
 * print_dlistint - Print the elements of a linked list
 * @h: The head of the linked list
 * Return: The number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;
	const dlistint_t *tmp = h;

	if (h == NULL)
		return (0);

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		counter++;
		tmp = tmp->next;
	}

	return (counter);
}

