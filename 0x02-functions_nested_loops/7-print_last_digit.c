#include "main.h"
/**
 * print_last_digit - check the code
 * @c: check
 * Return: always zero
 */
int print_last_digit(int c)
{
	int l;

	if (c < 0)
		c = -c;
	l = c % 10;
	_putchar('0' + l);
	return (l);
}
