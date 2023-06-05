#include "main.h"
#include <stdlib.h>
/**
 * _memset - check the code
 * @s: the character
 * @b: the constant character
 * @n: the number of sets
 * Return: the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (s == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
