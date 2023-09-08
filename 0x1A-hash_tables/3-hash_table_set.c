#include "hash_tables.h"

/**
 * hash_table_set - add or update a node in the hash_table
 * @ht: the hash table
 * @key: the key (must be a non empty)
 * @value: the value
 * Return: 1 if succeed, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (!key)
		return (FAILURE);
	index = key_index((unsigned char*)key, ht->size);
	if (!ht->array[index])
	{
		ht->array[index]->key = (char *)key;
		ht->array[index]->value = (char *)value;
	}
	else
	{
		if (add_node(ht, key, value, index) == NULL)
		{
			return (FAILURE);
		}
	}

	return (SUCCESS);
}

/**
 * add_node - adds a node to the list where the collision occur
 * @ht: hash table
 * @key: key
 * @value: value
 * @index: the index where we want to add the node
 * Return: pointer of the new node
 */
hash_node_t *add_node(hash_table_t *ht, const char *key, const char *value,
					  const unsigned long int index)
{
	hash_node_t *new_node, *tmp;
	int i;

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;
	if (!ht->array[index]->next)
	{
		ht->array[index]->next = new_node;
		return (new_node);
	}
	tmp = ht->array[index];
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
