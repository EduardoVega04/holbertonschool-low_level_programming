#include "hash_tables.h"
/**
 * new_entry - Creates a new entry and returns it
 * @key: Key to add
 * @value: Value of the key
 * Return: The address of the new node
 */
hash_node_t *new_entry(const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	new_node->key = malloc(strlen(key) + 1);
	new_node->value = malloc(strlen(value) + 1);

	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
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
	unsigned long int index = 0;
	hash_node_t *entry = NULL;
	hash_node_t *add_new = NULL;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	entry = ht->array[index];

	if (entry == NULL)
	{
		entry = new_entry(key, value);
		return (1);
	}

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
		{
			free(entry->value);
			entry->value = malloc(strlen(value) + 1);
			strcpy(entry->value, value);
			return (1);
		}

		entry = entry->next;
	}

	add_new = new_entry(key, value);
	add_new->next = ht->array[index];
	ht->array[index] = add_new;

	return (1);
}
