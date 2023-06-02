#include "main.h"
/**
 * cap_string - capitalizes the starting letter
 * @s: the string
 * Return: the modified string
 */
char *cap_string(char *s)
{
	char *c = ",;.!?\"(){} \n\t";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		s[0] -= 32;
		for (j = 0; c[j] != '\0'; j++)
		{
			if (c[j] == s[i])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
