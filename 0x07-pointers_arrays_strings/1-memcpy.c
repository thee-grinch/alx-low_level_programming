#include "main.h"
/**
*_memcpy - check the code
*@dest: destination
*@src: source
*@n: number of characters
*
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
	{
		*s = *d;
	}
	return (dest);
}
