#include "main.h"
/**
* _memset - check the code
*@s: the string to be checked
*@b: the replacing character
*@n: number of characters to be replaced
*Return: modified string
*
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (n > 0; i++)
	{
		s[i] = b;
		n--;		
	}
	return (s);
}
