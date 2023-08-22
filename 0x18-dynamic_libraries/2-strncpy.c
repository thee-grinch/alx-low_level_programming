#include "main.h"
#include <stdlib.h>
/**
 * _strncpy - same as strncpy
 * @dest: destination
 * @src: source
 * @n: number of bites
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (dest && src && n >= 0)
	{
		for (i = 0; src[i] != '\0' && i < n; i++)
		{
			dest[i] = src[i];
		}
		for (; i < n; i++)
			dest[i] = '\0';
		return (dest);
	}
	return (dest);
}
