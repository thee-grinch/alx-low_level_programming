#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: the string
 * Return: the length
 */
int _strlen(char *s)
{
	int i, len;

	len = 0;
	if (s)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			len++;
		}
	}
	return (len);
}
