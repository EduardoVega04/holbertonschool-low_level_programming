#include "hash_tables.h"
/**
 * new_entry - Creates a new entry and returns it
 * @key: Key to add
 * @value: Value of the key
 * Return: The address of the new node
 */
void new_entry(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if(*h != NULL)
		new_node->next = *h;

	*h = new_node;	
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

	if (!ht || !key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	entry = ht->array[index];

	if (entry == NULL)
	{
		new_entry(&entry, key, value);
		return (1);
	}

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
		{
			free(entry->value);
			entry->value = strdup(value);
			return (1);
		}

		entry = entry->next;
	}

	new_entry(&ht->array[index], key, value);

	return (1);
}
