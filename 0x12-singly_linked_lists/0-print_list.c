#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: head of the linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodos = 0;

	while (h != NULL)
	{
		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
		}

		printf("[%d] %s\n", (*h).len, (*h).str);

		nodos++;
		h = (*h).next;
	}
	return (nodos);
}
