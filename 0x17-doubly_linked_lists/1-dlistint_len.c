#include "lists.h"
/**
 * dlistint_len - Print the number of nodes
 * @h: Head of the linked list
 * Return: The number of elements (nodes).
 */
size_t dlistint_len(const dlistint_t *h)
{
	int contador = 0;
	const dlistint_t *tmp = h;

	if (h == NULL)
		return (0);

	while (tmp != NULL)
	{
		contador++;
		tmp = tmp->next;
	}

	return (contador);
}
