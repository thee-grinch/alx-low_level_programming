#include "main.h"
/**
*cap_string - check the code
*@s:string
*Return: check the code
*/
char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \n\t,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
		z[0] -= 32;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; sep[j]; j++)
		{
			if (sep[j] == s[i])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
					s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
