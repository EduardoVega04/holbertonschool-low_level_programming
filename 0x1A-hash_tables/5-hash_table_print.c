#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table
 * @ht: Pointer to the hash table to print
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, first_time = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}

	printf("{");

	for(i = 0; i < ht->size; i++)
	{
		for (tmp = ht->array[i]; tmp != NULL; tmp = tmp->next)
		{
			if (first_time == 1)
				printf(", ");

			printf("'%s' : '%s'", tmp->key, tmp->value);
			first_time = 1;
		}
	}
	printf("}\n");
}