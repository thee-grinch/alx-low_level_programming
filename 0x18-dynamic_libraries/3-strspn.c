#include "main.h"
/**
 * _strspn - gets the length of a substring string
 * @s: the length of a substring string
 * @accept: the substring
 * Return: the length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;

	i = 0;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == *s)
			{
				i++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (i);
		j = 0;
		s++;
	}
	return (i);
}
