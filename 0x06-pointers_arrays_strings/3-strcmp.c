#include "main.h"
#include <stdlib.h>
/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string 2
 * Return: ascii difference
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'); i++)
	{
		if (s1[i] == s2[i])
			continue;
		if (s1[i] == '\0' || s2[i] == '\0')
			break;
	}
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
	return (0);
}
