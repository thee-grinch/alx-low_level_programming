#include "main.h"
/**
 * print_rev - check the code
 * @s: the string to be reversed
 * _strlen - check the code
 * Return: the length
 *@s: check the code
 */
int _strlen(char *s)
{
	int i, len;

	len = 0;
	if (s)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			len++;
		}
	}
	return (len);
}
void print_rev(char *s)
{
	int i, len;

	if (s)
	{
		len = _strlen(s);
		for (i = len - 1; i >= 0; i--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}
}
