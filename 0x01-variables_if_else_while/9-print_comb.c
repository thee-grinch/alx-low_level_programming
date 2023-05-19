#include <stdio.h>
/**
 * main - check the code
 * Return: always 0
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++){
		if(c == '9'){
			putchar(c);
		}
		else
		{
			putchar(c);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
