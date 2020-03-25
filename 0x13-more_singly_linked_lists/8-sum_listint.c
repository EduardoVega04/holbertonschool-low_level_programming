#include "lists.h"
/**
 * sum_listint - Sum all the integers in a  list
 * @head: of the list
 *
 * Return: sum of integers
 */
int sum_listint(listint_t *head)
{
size_t suma = 0;

if (head == NULL)
	return (0);

while (head != NULL)
{
	suma += head->n;
	head = head->next;
}
return (suma);
}
