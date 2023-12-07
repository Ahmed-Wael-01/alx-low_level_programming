#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: size of the hash's array
 *
 * Description: it makes a new hash table :D
 * Return: pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->(*array + i) = NULL;
	return (table);
}
