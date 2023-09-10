#include "hash_tables.h"

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
	hash_node_t *new_node, *tmp;
	char *value_copy;

	if (!ht || key == 0 || !value)
		return (FAILURE);
	index = key_index((unsigned char *)key, ht->size);

	value_copy = strdup(value);
	if (!value_copy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_copy;
			return (SUCCESS);
		}
		tmp = tmp->next;
	}
	free(value_copy);

	new_node = create_node(key, value);
	if (!new_node)
		return (FAILURE);

	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		tmp = ht->array[index];
		new_node->next = tmp;
		ht->array[index] = new_node;
	}

	return (SUCCESS);
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

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}
