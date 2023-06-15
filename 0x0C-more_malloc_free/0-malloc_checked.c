#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates a memory
 * @b: the number of bites
 * Return: the void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
