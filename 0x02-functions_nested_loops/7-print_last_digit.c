#include "main.h"
/**
 * print_last_digit - check the code
 * @c: check
 * @Return: always zero
 */
int print_last_digit(int c)
{
	_putchar('0' + (c % 10));
	return (c % 10);
}