#include "main.h"
#include <stdlib.h>
/**
 * _strlen - checks the length of the string
 * @s: the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	if (s == NULL)
		return (0);
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string 2
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *concat;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	concat = (char *)malloc(len1 + len2 + 1);
	if (concat == NULL)
		return (NULL);
	i = 0;
	while (s1 != NULL)
	{
		if (*s1 == '\0')
			break;
		concat[i] = *s1;
		i++;
		s1 += 1;
	}
	while (s2 != NULL)
	{
		if (*s2 == '\0')
			break;
		concat[i] = *s2;
		i++;
		s2 += 1;
	}
	concat[i] = '\0';
	return (concat);
}
