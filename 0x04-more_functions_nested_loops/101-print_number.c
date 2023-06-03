#include "main.h"
/**
 * print_number -prints an integer
 * @n: the number to be printed
 */
void print_number(int n)
{
	int j;

	if (n == 0)
		_putchar('0');

	j = n;

	if (j > 0)
	{
		print_number(j / 10);
	}
	_putchar('0' + (j % 10));
}

