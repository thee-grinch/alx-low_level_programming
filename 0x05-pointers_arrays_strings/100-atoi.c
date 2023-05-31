#include "main.h"
/**
 * _atoi - works the same as atoi
 * @s: the atoi integer
 * Return: the int
 */
int _atoi(char *s)
{
	int sign, rev, i;

	rev = 0;
	sign = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			rev = rev * 10 + (s[i] - '0');
			if (s[i + 1] >= '0' && s[i + 1] <= '9')
				continue;
			else
				break;
		}
	}
	if (sign < 0)
		rev = 0 - rev;
	return (rev);
}
