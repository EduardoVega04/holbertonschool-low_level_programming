#include "hash_tables.h"
/**
 * hash_table_create - Dinamically create a hash table (array)
 * @size: The size of the hash table
 * Return: Returns a pointer to the hash table (a pointer to array of pointers)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = NULL;

	hashTable = calloc(1, sizeof(hash_table_t));
	if (hashTable == NULL)
		return (NULL);

	hashTable->size = size;
	hashTable->array = calloc(size, sizeof(hash_node_t *));
	if (hashTable->array == NULL)
	{
		free(hashTable);
		return (NULL);
	}

	return (hashTable);
}
