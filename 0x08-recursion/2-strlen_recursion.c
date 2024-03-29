#include "main.h"

/**
 * _strlen_recursion - returns the string length using recursion
 * @s: the string to be checked
 *
 * Return: the string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

