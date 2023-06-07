#include "main.h"
/**
 * length - computes the length of a string
 * @s: the string
 * Return: the string
 */
int length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length(s + 1));
}
/**
 * checkPalindrome - checks whether a string is a palindrome
 * @a: the first char
 * @b: the second char
 * Return: 1 if true, else zero
 */
int checkPalindrome(char *a, char *b)
{
	if (*a != *b)
		return (0);
	if (a >= b)
		return (1);
	return (1 * checkPalindrome(a + 1, b - 1));
}
/**
 * is_palindrome - checks palingrome
 * @s: the string
 * Return: 1 if positive
 */
int is_palindrome(char *s)
{
	int len = length(s);

	--len;
	return (checkPalindrome(s, (s + len)));
}
