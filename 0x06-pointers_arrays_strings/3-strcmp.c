#include "main.h"
#include <stdlib.h>
/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string 2
 * return: ascii difference
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	if (s1 > s2)
		i = *s1 - 0;
	else if (s2 > s1)
		i = 0 - *s1;
	else
		i = 0;
	return (i);
}
