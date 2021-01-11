#include "hash_tables.h"
/**
 * hash_table_delete - frees the hash table
 * @ht: pointer to the hashtable
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *eraser = NULL;
	hash_node_t *prev = NULL;

	if (!ht)
		return;

	for (; i < ht->size; i++)
	{
		eraser = ht->array[i];

		while (eraser != NULL)
		{
			prev = eraser;
			eraser = eraser->next;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
	}

	free(ht->array);
	free(ht);
}
