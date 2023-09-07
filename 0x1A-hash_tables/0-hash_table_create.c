#include "main.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of the hash table
 * Return: pointer to the first element of the array or NULL
 * if something fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->array = (hash_node_t **)malloc(sizeof(hash_node_t) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
