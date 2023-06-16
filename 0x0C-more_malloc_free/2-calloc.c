#include "main.h"
#include <stdlib.h>
/**
 * _calloc - works the same as caloc
 * @nmemb: number of members
 * @size: the size of members
 * Return: always zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		mem[i] = 0;
	}
	return (mem);
}
