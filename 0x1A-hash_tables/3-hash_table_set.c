#include "hash_tables.h"

hash_node_t *add_node_to_list(hash_table_t *ht, const char *key,
							  const char *value,
							  const unsigned long int index);
hash_node_t *create_node(const char *key, const char *value);
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
	hash_node_t *new_node;

	if (!key)
		return (FAILURE);
	index = key_index((unsigned char *)key, ht->size);

	if (!ht->array[index])
	{
		new_node = create_node(key, value);
		if (!new_node)
			return (FAILURE);
		ht->array[index] = new_node;
	}
	else
	{
		if (add_node_to_list(ht, key, value, index) == NULL)
			return (FAILURE);
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
hash_node_t *add_node_to_list(hash_table_t *ht, const char *key,
							  const char *value,
							  const unsigned long int index)
{
	hash_node_t *new_node, *tmp;
	int i;

	new_node = create_node(key, value);
	if (!new_node)
		return (NULL);
	if (ht->array[index]->next == NULL)
	{
		ht->array[index] = new_node;
		return (new_node);
	}
	tmp = ht->array[index];
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	tmp->next = new_node;
	return (new_node);
}

/**
 * create_node - made this function following the DRY principle
 * @key: key
 * @value: value
 * Return: pointer to the new node
 *
*/
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	return (new_node);
}
