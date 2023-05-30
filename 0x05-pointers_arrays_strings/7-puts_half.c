#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int i, j, len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len++;
	if (len % 2 == 0)
		j = len / 2;
	else
		j = (len / 2) + 1;
	for (; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar(10);
}
