#include "main.h"
#include <stdlib.h>
/**
 * length - calculatest the length of a string
 * @s: the string to be checked the length
 * Return: the length
 */
int length(char *s)
{
	int i, len;

	len = 0;
	if (s)
	{
		for (i = 0; s[i] != '\0'; i++)
			len++;
	}
	return (len);
}
/**
 * _strdup - duplicates a string
 * @str: the string to be duplicated
 * Return: the duplicated string
 */
char *_strdup(char *str)
{
	int i, len;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	len = length(str);
	duplicate = malloc(len * sizeof(char) + 1);
	if (duplicate != NULL)
	{
		for (i = 0; i < len; i++)
		{
			duplicate[i] = str[i];
		}
		duplicate[i] = '\0';
		return (duplicate);
	}
	return (NULL);
}
