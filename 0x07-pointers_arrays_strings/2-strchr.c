#include "main.h"
#include <stdlib.h>
/**
 * _strchr - locates a string
 * @s: the source string
 * @c: the character to be checked
 * Return: the location
 */
char *_strchr(char *s, char c)
{
	int i;

	if (s == NULL)
		return (NULL);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
