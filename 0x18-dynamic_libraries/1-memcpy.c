#include "main.h"
#include <stdlib.h>
/**
 * _memcpy - copies a sring array
 * @src: the source file
 * @dest: the destination file
 * @n: the number of i items
 * Return: the dest pointer
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
