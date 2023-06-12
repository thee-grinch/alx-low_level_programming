#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array and initialises it
 * @size: the array size
 * @c: the character array
 * Return: the array poinet or null
 */
char *create_array(unsigned int size, char c)
{
	char *arrptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arrptr = malloc(size * sizeof(char));
	if (arrptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			arrptr[i] = c;
		}
		return (arrptr);
	}
	return (NULL);
}
