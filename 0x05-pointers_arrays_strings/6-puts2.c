#include "main.h"
/**
*puts2 - check the code
*@str:char to be checked
*
*/
void puts2(char *str)
{
	int i = 0;

	_putchar(str[0]);
	while (str[i + 1] != '\0')
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
		i++;
	}
}
