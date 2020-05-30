#include "hash_tables.h"
/**
 * hash_table_create - Dinamically create a hash table (array)
 * @size: The size of the hash table
 * Return: Returns a pointer to the hash table (a pointer to array of pointers)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = NULL;
	unsigned long int i;

	hashTable = malloc(sizeof(hash_table_t) * 1);
	if (hashTable == NULL)
		return (NULL);

	hashTable->size = size;
	hashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashTable->array == NULL)
	{
		free(hashTable);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hashTable->array[i] = NULL;

	return (hashTable);
}
