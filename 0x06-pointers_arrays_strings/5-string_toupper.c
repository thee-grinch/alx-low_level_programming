#include "main.h"
/**
 * string_toupper - converts a string to upper case
 * @s: the string to be converted
 * Return: the converted dtring
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
