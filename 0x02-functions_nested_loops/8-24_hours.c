#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */
void jack_bauer(void)
{
	char  hrtens, hr, mntens, mn;
	
	hrtens = '0';
	
	while (hrtens < '3')
	{
		hr = '0';
		
		while (hr <= '9')
		{
			mntens = '0';
			while (mntens < '6')
			{
				mn = '0';
				while (mn <= '9')
				{
					_putchar(hrtens);
					_putchar(hr);
					_putchar(':');
					_putchar(mntens);
					_putchar(mn);
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

