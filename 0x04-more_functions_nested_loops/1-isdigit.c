#include "main.h"
/**
 * _isdigit - check the code
 * @c: check the code
 * Return: 1 if a digit 2 if not a digit
 */
int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
