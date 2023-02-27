#include "main.h"
/**
*_puts - check the code
*@str:string to be printed
*
*/
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
