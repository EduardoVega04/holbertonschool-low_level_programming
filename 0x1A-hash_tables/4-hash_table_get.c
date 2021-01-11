#include "hash_tables.h"
/**
 * hash_table_get - Retrieves the value of a given key
 * @ht: Pointer to the hash table
 * @key: The key we are looking for
 * Return: The value associated with the key, or NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *entry = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	entry = ht->array[index];

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
			return (entry->value);

		entry = entry->next;
	}

	return (NULL);
}
