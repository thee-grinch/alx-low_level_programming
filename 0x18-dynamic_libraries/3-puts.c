#include "main.h"
/**
 * _puts - works as puts
 * @str: string to be printed
 *
 */
void _puts(char *str)
{
	int i;

	if (str)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
