#include "main.h"
/**
 * _isupper - check whether uppercase letter is present
 * Return: 1 true 0 false
 * @c: the int to be checked
 */
int _isupper(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
