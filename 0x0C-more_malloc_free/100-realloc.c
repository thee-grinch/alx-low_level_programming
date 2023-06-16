#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory
 * @ptr: the pointer
 * @old_size: the pointer size
 * @new_size: new pointer size
 * Return: the initialised pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old = ptr;
	unsigned int i;
	char *new;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);
	for (i = 0; i < old_size; i++)
	{
		new[i] = old[i];
	}
	free(ptr);
	return (new);
}
