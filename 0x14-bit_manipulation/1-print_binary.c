#include "main.h"
/**
 * print_binary - prints a number in binary
 * @n: the number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int checker = 1UL << 31;
	int i;
	char f = 0;

	for (i = 0; i < 32; i++)
	{
		if (checker & n)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || checker == 1)
		{
			_putchar('0');
		}

		checker >>= 1;
	}
}
