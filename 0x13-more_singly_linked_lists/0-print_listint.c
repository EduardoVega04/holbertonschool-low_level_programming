#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t contador = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		contador++;
		h = h->next;
	}
	return (contador);
}
