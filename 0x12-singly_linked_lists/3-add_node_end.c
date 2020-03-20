#include "lists.h"
/**
 * add_node_end -  adds a new node a list_t or listt.
 * @head: address of the head (I think)
 * @str: string to be added (must be duplicated)
 * Return: Adress of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *ptr;
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

	(*new_node).next = NULL;

	if (*head != NULL)
	{
		ptr = *head;
		while ((*ptr).next != NULL)
		{
			ptr = (*ptr).next;
		}
		(*ptr).next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (*head);
}
