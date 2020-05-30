#include "hash_tables.h"
/**
 * key_index - Returns the assigned index for a key
 * @key: string used to generate hash value
 * @size: The size of the array (hash table)
 * Return: Index in hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
