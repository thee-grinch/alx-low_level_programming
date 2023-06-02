#include "main.h"
/**
 * print_number - prints a number
 * @n: the integer to be printed
 *
 */
void print_number(int n)
{
	unsigned int reverse = 0;
	char sign = '+';

	if (n == 0)
		_putchar('0');
	if (n < 0)
	{
		sign = '-';
		n = -n;
	}
	while (n > 0)
	{
		reverse = reverse * 10 + (n % 10);
		n /= 10;
	}
	if (sign == '-')
		_putchar('-');
	while (reverse > 0)
	{
		_putchar('0' + (reverse % 10));
		reverse /= 10;
	}
}
