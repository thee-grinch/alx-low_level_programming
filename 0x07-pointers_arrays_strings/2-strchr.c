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
	if (s == NULL)
		return (NULL);
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
