#include "main.h"
/**
 * print_line - prints a line
 * @n: the number of characters
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar(10);
	}
}
