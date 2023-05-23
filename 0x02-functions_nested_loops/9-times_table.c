#include "main.h"
/**
 * times_table - prints the times table
 */
void times_table(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k <= 9)
			{
				_putchar('0' + k);
			}
			else
			{
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
			}
			if (j == 9)
			{
				_putchar('\n');
				continue;
			}
			_putchar(',');
			l = i * (j + 1);
			if ((l - k) <= 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
				_putchar(' ');
		}
		j = 0;
	}
}
