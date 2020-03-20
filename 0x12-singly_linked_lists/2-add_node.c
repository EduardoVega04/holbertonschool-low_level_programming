#include "lists.h"
/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: Address of the head node (I think)
 * @str: string to be added in the new node (must be duplicated)
 * Return: Adress of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_copy = strdup(str);
	int largo = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	(*new_node).str = str_copy;

	while (*str)
	{
		str++;
		largo++;
	}

	(*new_node).len = largo;

	(*new_node).next = *head;

	*head = new_node;

	return (*head);
}
