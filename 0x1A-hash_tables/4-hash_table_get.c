#include "hash_tables.h"

/**
 * hash_tables_get - return the value associated with a key
 * @ht: the hash table
 * @key: the key
 * Return: the value associated or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (!ht || !key)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (!ht->array[index])
		return (NULL);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
