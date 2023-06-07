#include "main.h"
/**
 * _print_rev_recursion - prints the reverse of a string
 * @s: the string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
