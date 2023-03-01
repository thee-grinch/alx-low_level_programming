#include "main.h"
/**
*_strncpy - check the code
*@dest: string 1
*@src: string 2
*@n: number of characters
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (i < n)
		dest[i] = '\0';
	return (dest);
}
