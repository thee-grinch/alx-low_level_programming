#include "main.h"
/**
 * print_alphabet_x10 - check the code
 */
void print_alphabet_x10(void)
{
	int i,k;

	for (i = 0; i <= 9; i++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
			_putchar(10);
		}
	}
}
