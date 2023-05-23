#include "main.h"
/**
 * jack_bauer - check the code
 * Return: always zero
 */
void jack_bauer(void)
{
	int hour, mins;

	for (hour = 0; hour <= 23; h++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (mins / 10));
			_putchar('0' + (mins % 10));
			_putchar(10);
		}
		mins = 0;
	}
}
