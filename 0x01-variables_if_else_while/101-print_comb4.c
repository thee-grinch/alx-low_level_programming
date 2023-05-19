#include <stdio.h>
/**
 * main - check the code
 * Return: check the code
 */
int main(void)
{
	int c;

	for (c == 0; c <= 999; c++)
	{
		if ((c / 100) >= ((c / 10) % 10) || ((c / 10) % 10) >= (c % 10))
		{
			continue;
		}
		else if ((c / 100 >= c % 10))
		{
			continue;
		}
		else
		{
			putchar('0' + c / 100);
			putchar('0' + ((c / 10) % 10));
			putchar('0' + c % 10);
			if (c != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
