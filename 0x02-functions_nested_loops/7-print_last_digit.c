#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @c: is the character to be computed
 * Return:is the output
 *
 */
int print_last_digit(int c)
{
	int a;

	if (c < 0)
		c = -c;
	else
		c;
	a = c % 10;
	_putchar('0' + a);
	return (a);
}
