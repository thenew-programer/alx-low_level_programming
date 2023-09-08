#include "hash_tables.h"

/**
 * key_index - returns the hash for the key based on the djb2 algo
 * @key: the key to be hashed
 * @size: the size of the hash table
 * Return: the hash
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
