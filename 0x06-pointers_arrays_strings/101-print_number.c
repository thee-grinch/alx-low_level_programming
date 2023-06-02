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

	if (n < 0)
	{
		sign = '-';
		n = -n;
	}
	if (sign == '-')
		_putchar('-');
	if (n >= 0 && n <= 9)
		_putchar('0' + n);
	if (n >= 10)
	{
		while (n > 0)
		{
			reverse = reverse * 10 + (n % 10);
			n /= 10;
		}
		while (reverse > 0)
		{
			_putchar('0' + (reverse % 10));
			reverse /= 10;
		}
	}
}
