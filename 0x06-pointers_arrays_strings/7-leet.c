#include "main.h"
/**
 * leet - encodes a string
 * @s: the string
 * Return: the encoded string
 */
char *leet(char *s)
{
	char *a = "AEOTL";
	char *b = "aeotl";
	char *c = "43071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == a[j] || s[i] == b[j])
				s[i] = c[j];
		}
	}
	return (s);
}
