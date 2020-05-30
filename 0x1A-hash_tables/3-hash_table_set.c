#include "hash_tables.h"
/**
 * add_node_beginning - Adds a node at the beginning of a linked list
 * @head: head of the linked list
 * @key: Key to add
 * @value: Value of the key
 * Return: The address of the new node
 */
hash_node_t *add_node_beginning(hash_node_t **head, const char *key,
		const char *value)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
/**
 * hash_table_set - Adds an element in the hash table
 * @ht: Pointer to the hash table
 * @key: key to add
 * @value: value of the key
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = -1;
	const char *cpy_value = strdup(value);

	if (!ht || !key || strlen(key) == 0 || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	ht->array[index] = add_node_beginning(&(ht->array[index]), key, cpy_value);
	if (ht->array[index] == NULL)
		return (0);

	return (1);
}

