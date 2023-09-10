#include "hash_tables.h"

/**
* hash_table_delete - delete a hash table in other word
* frees a hash table
* @ht: the hash table
* Return: nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *tmp1;
	unsigned long int i;

	if (!ht || !ht->array)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			tmp1 = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = tmp1;
		}
	}
	free(ht->array);
	free(ht);
}
