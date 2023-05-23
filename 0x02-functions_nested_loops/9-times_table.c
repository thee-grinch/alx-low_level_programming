#include "main.h"
/**
 * times_table - prints the times table
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k <= 9)
				_putchar('0' + k);
				_putchar(',');
				_putchar(' ');
			else
			{
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
				_putchar(',');
			}
			if (j == 9)
			{
				_putchar('\n');
				continue;
			}
			_putchar(' ');
		}
		j = 0;
	}
}
