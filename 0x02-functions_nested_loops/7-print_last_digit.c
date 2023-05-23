#include "main.h"
/**
 * print_last_digit - check the code
 * @c: check
 * Return: always zero
 */
int print_last_digit(int c)
{
	int l = (c % 10);

	_putchar('0' + l);
	return (l);
}


