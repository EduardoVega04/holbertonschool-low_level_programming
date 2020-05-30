#include "hash_tables.h"
/**
 * hash_table_get - Retrieves the value of a given key
 * @ht: Pointer to the hash table
 * @key: The key we are looking for
 * Return: The value associated with the key, or NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp = NULL;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key);

	for(tmp = ht->array[index]; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
	}

	return (NULL);
}