#include "lists.h"
/**
 * add_nodeint_end -  adds a new node a list_t or listt.
 * @head: address of the head (I think)
 * @n: Data for the new node
 * Return: Adress of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *ptr;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head != NULL)
	{
		ptr = *head;
		while ((*ptr).next != NULL)
		{
			ptr = (*ptr).next;
		}
		(*ptr).next = newNode;
	}
	else
	{
		*head = newNode;
	}
	return (*head);
}
