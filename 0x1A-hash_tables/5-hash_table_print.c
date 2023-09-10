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

	if (!ht || !ht->array || ht->size == 0)
		return;

	putchar('{');
	empty_cells = 0;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (i == ht->size - 1 && empty_cells != ht->size - 1)
			printf("\b\b");
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
	puts("}");

}
