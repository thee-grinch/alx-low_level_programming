#include "hash_tables.h"

/**
 * key_index - returns the index of a new key
 * @key: the key to be inserted
 * @size: the size of thye hash table
 * Return: the key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
