#include "main.h"
#include <stdlib.h>
/**
 * _calloc _ works the same as caloc
 * @nmemb: number of members
 * @size: the size of members
 * Return: always zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *mem;
	unsigned char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	ptr = (unsigned char *)mem;
	for (i = 0; i < nmemb * size; i += size)
	{
		ptr[i] = 0;
	}
	return (mem);
}
