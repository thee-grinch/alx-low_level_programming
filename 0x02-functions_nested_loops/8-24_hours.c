#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */
void jack_bauer(void)
{
	char  hrtens, hr, mntens, mn;

	while (hrtens < '3')
	{
		while (hr <= '9')
		{
			while (mntens < '6')
			{
				while (mn <= '9')
				{
					_putchar('hrtens');
					_putchar('hr');
					_putchar(':');
					_putchar('mntens');
					_putchar('mn');
					_putchar('\n');
					mn++;
				}
				mntens++;
				mn = '0';
			}
			hr++;
			mntens = '0';
		}
		hrtens++;
		hr = '0';
	}
}

