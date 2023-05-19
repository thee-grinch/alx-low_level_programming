#include <stdio.h>
/**
 * main - check the code
 * Return: always zero
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar(10);
	return (0);
}
