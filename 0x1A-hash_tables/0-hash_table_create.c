#include "hash_tables.h"
/**
 * hash_table_create - Dinamically create a hash table (array)
 * @size: The size of the hash table
 * Return: Returns a pointer to the hash table (a pointer to array of pointers)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = NULL;

	hashTable = malloc(sizeof(hash_node_t) * size);
	if (hashTable == NULL)
		return (NULL);

	return (hashTable);
}
