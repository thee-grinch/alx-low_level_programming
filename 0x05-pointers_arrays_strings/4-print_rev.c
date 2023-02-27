#include "main.h"
/**
*print_rev - check the code
@s:string to be printed in reverse
*
*/
void print_rev(char *s)
{
	int i = 0;
	int length = 0;

	while (str[i] != '\0')
	{
		i++;
		length++;
	}
	while (length >= 0)
	{
		if (str[length] != '\0')
			_putchar(str[length];
		length--;
	}
	_putchar('\n');
}
