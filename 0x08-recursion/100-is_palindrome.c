#include "main.h"
/**
*strl - length
*@s: string
*Return: the length
*/
int strl(*s)
{
	if (*s == '\0')
		return (0);
	else
	return (1 + strl(s + 1));
}
/**
*is_palindrome - checks whether a srting is a palindrome
*@s: string to be checked
*Return: always 1
*/
int is_palindrome(char *s)
{
	int h = 0;
	int l = strl(s);

	while (l > 0)
	{
		if (*(s + h++) != *(s + l--)
			return (0);
	}
	return (1);
}
