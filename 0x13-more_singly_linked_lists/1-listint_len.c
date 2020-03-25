#include "lists.h"
/**
 * listint_len - prints the number of elements of a list
 * @h: head of the linked list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t contador = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		contador++;
		h = h->next;
	}
	return (contador);
}
