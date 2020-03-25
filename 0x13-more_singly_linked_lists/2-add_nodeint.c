#include "lists.h"
/**
 * add_nodeint -  adds a new node at the beginning of a list_t list.
 * @head: Address of the head node (I think)
 * @n: Data for the new node
 * Return: Adress of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
