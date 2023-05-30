#include "main.h"
/**
 * rev_string - reverses a string
 * @s: to be reversed
 */
void rev_string(char *s)
{
	int i, j, len;
	char rev;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	i--;
	for (j = 0; j < len / 2; j++)
	{
		rev = s[j];
		s[j] = s[i];
		s[i] = rev;
		i--;
	}
}
