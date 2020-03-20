#include "lists.h"

/**
 * list_len - prints the number of elements of a list
 * @h: head of the linked list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t contador = 0;

	while (h != NULL)
	{
		contador++;
		h = (*h).next;
	}
	return (contador);
}
