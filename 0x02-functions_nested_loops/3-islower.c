#include "main.h"
/**
 * _islower - check the code
 * @C: char to be checked
 * Return: 1 true 0 false
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; 1 <= 'z'; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
	return (0);
}
