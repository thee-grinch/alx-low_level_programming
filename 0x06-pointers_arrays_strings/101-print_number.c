#include "main.h"
/**
 * print_number - prints a number
 * @n: the integer to be printed
 *
 */
void print_number(int n)
{
	unsigned int reverse = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	reverse = n;

	if (reverse / 10)
		print_number(reverse / 10);
	_putchar(reverse % 10 + '0');
}
