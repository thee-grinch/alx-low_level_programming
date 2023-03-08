#include "main.h"
/**
*_puts_recursion - check the code
*@s: string to be checked
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		_putchar('\n');
	}
}
