#include <stdio.h>
/**
 * main - check the code
 * Return: always zero
 */
int main(void)
{
	int c, d;

	for (d = 0; d <= 99; d++)
	{
		for (c = 0; c <= 99; c++)
		{
			if (c >= d)
			{
				continue;
			}
			putchar('0' + c / 10);
			putchar('0' + c % 10);
			putchar(' ');
			putchar('0' + d / 10);
			putchar('0' + d % 10);
			if (c == 98 && d == 99)
				break;
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
