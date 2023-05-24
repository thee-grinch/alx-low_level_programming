#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -  prints to 98
 * @n: integer to be printed
 */
void print_to_98(int n)
{
	int l;

	if (n > 98)
	{
		for (l = n; l >= 98; l--)
		{
			printf("%d", l);
			if (l == 98)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else if (n < 98)
	{
		for (l = n; l <= 98; l++)
		{
			printf("%d", l);
			if (l == 98)
				putchar(10);
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
		printf("%d\n", 98);
}
