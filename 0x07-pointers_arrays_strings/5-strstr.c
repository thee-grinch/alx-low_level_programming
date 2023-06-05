#include <stdlib.h>
#include "main.h"
/**
 * _strstr - locates a substring in a string
 * @haystack: the string
 * @needle: the substring
 * Return: the pointer to the substring
 *
 */
char *_strstr(char *haystack, char *needle)
{
	char *s;

	if (*needle == '\0')
		return (NULL);
	while (*haystack)
	{
		if (*haystack != *needle)
			haystack++;
		else
		{
			s = haystack;
			while (*haystack && *needle && *haystack == *needle)
			{
				haystack++;
				needle++;
				if (*needle == '\0')
					return (s);
			}
		}
	}
	return (NULL);
}
