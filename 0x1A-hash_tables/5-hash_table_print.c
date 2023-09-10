#include "hash_tables.h"

/**
* hash_table_print - print a hash table
* @ht: hash table
* Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i, comma_flag = 0;

	if (!ht || ht->size == 0)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (comma_flag == 1)
				printf(", ");

			tmp = ht->array[i];
			while (tmp)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");

}
