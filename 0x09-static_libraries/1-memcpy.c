#include "main.h"
/**
*_memcpy - check the code
*@dest: destination
*@src: source
*@n: number of characters
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
