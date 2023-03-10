#include "main.h"
/**
*_strchr - check the code
*@s: main string
*@c: substring
*Return: string s
*/
char *_strchr(char *s, char c)
{
	while (s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
