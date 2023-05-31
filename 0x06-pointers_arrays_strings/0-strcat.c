#include "main.h"
#include <stdlib.h>
/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source file
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	while (dest && src)
	{
		for (i = 0; dest[i] != '\0'; i++)
		{
		}
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[i] = src[j];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
