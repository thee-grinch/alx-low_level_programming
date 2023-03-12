#include "main.h"
/**
*strl - length
*@s: string
*Return: the length
*/
int strl(char *s)
{
	if (*s == '\0')
		return (0);
	else
	return (1 + strl(s + 1));
}
/**
*isPalindrome - checks whether a srting is a palindrome
*@s: string to be checked
*@i: starting point
*@l:end point
*Return: always 1
*/
int isPalindrome (char *s, int i, int l)
{
	if (i >= l)
		return (0);
	else if (s[i] != s[l])
		return (0);
	else if (s[i] == s[l])
		return (1);
	return (0);
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
	
	if (s[h] != s[--l])
		return (0);
	else
		return (1 * isPalindrome(s, h + 1, l - 1));
}
