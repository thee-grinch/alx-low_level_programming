#include <stdlib.h>
#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the substring
 * @needle: the string
 * Return: the location
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	j = 0;

	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i] == needle[j] && needle[j] != '\0')
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return (haystack + i - j);
			if (needle[j] != '\0')
			{
				j = 0;
			}
		}
		else
			i++;
	}
	return (NULL);
}
