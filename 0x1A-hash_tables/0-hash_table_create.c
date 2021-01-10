#include "hash_tables.h"
/**
 * hash_table_create - Dinamically create a hash table (array)
 * @size: The size of the hash table
 * Return: Returns a pointer to the hash table (a pointer to array of pointers)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;
	int i;

	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);

	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t *) * hashtable->size);
	if(hashtable->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hashtable->array[i] = NULL;

	return hashtable;
}
