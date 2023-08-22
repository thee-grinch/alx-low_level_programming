#include "main.h"
#include <stdlib.h>
/**
 * _strncat - works as strcat fn
 * @dest: destination
 * @src: source
 * @n: number of the items
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;

	len = 0;
	while (dest && src && n >= 0)
	{
		for (i = 0; src[i] != '\0'; i++)
		{
			len++;
		}
		i = 0;
		for (; dest[i] != '\0'; i++)
		{
		}
		for (j = 0; src[j] != '\0'; j++)
		{
			if (j < n)
				dest[i] = src[j];
			i++;
		}
		if (len < n)
			dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}

