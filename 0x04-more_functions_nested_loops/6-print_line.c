#include "main.h"
/**
*print_line - Entry point
* @n: number of times the character _ should be printed
*/
void print_line(int n)
{
	int i;

	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	i++;
	}
	_putchar('\n');
}
