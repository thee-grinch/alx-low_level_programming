#include <stdlib.h>
#include "main.h"
/**
 * _strlen - checks the length of the string
 * @s: the string
 * Return: str length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * string_nconcat - concatenates a string
 * @s1: string one
 * @s2: string two
 * @n: the number of characters
 * Return: the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2;
	unsigned int i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	concat = (char *)malloc(len1 + len2 + 1);
	if (concat == NULL)
		return (NULL);
	j = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[j++] = s1[i];
	}
	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		concat[j++] = s2[i];
	}
	concat[j] = '\0';
	return (concat);
}
