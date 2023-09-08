#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of the hash table
 * Return: pointer to the first element of the array or NULL
 * if something fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
