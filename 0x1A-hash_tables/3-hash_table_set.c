#include "hash_tables.h"
/**
 * add_node - Adds a node at the beginning of a linked list
 * @head: Head of the linked list (pointer in the hash table index)
 * @key: Key to add
 * @value: Value of the key
 * Return: The address of the new node
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	char *dup_key = strdup(key);
	char *dup_value = strdup(value);

	if (!dup_key)
		return (NULL);

	if (!dup_value)
	{
		free(dup_key);
		return (NULL);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(dup_value);
		free(dup_key);
		return (NULL);
	}

	new_node->key = dup_key;
	new_node->value = dup_value;

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
	unsigned long int index;
	char *dup_value = NULL;
	hash_node_t *tmp = NULL;

	if (!ht || !key || strlen(key) == 0 || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	for (tmp = ht->array[index]; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			dup_value = strdup(value);
			if (dup_value == NULL)
				return (0);

			free(tmp->value);
			tmp->value = dup_value;
			return (1);
		}
	}

	if (add_node(&(ht->array[index]), key, value) == NULL)
		return (0);

	return (1);
}

