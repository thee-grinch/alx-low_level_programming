#include "hash_tables.h"
/**
 * key_index - calculates the index of the key
 * @key: the key to be placed
 * @size: the size of the index
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
