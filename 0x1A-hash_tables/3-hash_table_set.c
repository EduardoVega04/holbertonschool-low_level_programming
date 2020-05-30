#include "hash_tables.h"
/**
 * create_node - Adds a node at the beginning of a linked list
 * @key: Key to add
 * @value: Value of the key
 * Return: The address of the new node
 */
hash_node_t *create_node(const char *key, const char *value)
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
	new_node->next = NULL;

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

	tmp = create_node(key, value);
	if (tmp == NULL)
		return (0);

	tmp->next = ht->array[index];
	ht->array[index] = tmp;

	return (1);
}

