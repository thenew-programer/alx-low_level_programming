#include "hash_tables.h"

/**
* hash_table_print - print a hash table
* @ht: hash table
* Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, empty_cells;
	hash_node_t *tmp;

	if (!ht || ht->size == 0)
		return;

	printf("{");
	empty_cells = 0;
	for (i = 0; i < ht->size; i++)
	{
		if (empty_cells == ht->size - 1)
		{
			printf("\b{}\n");
			return;
		}
		tmp = ht->array[i];
		if (!tmp)
		{
			empty_cells++;
			continue;
		}
		while (tmp)
		{
			printf("'%s':'%s', ", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("\b\b}\n");

}
