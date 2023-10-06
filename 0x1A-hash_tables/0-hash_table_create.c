#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 * Return: thepointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = malloc(size * sizeof(hash_node_t *));
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}
	return (new);
}
