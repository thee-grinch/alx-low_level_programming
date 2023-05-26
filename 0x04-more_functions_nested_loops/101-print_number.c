#include "main.h"
/**
 * print_number -prints an integer
 * @n: the number to be printed
 */
void print_number(int n)
{
	int rev, i, j;

	rev = 0;
	if (n < 0)
		j = -n;
	if (n > 0)
		j = n;
	if (n == 0)
		_putchar('0');
	while (j > 0)
	{
		i = j % 10;
		rev += i;
		if (j >= 10)
			rev *= 10;
		j /= 10;
	}
	if (n < 0)
		_putchar('-');
	while (rev > 0)
	{
		_putchar('0' + rev % 10);
		rev /= 10;
	}
	_putchar('\n');
}

