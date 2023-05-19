#include <stdio.h>
/**
 * main - check the code
 * Return: check the code
 */
int main(void)
{
	int c;

	for (c = 0; c <= 99; c++)
	{
		if (c / 10 >= c % 10)
		{
		}
		else
		{
			putchar('0' + c / 10);
			putchar('0' + c % 10);
			if (c != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
