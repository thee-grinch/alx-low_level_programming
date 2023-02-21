#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * @c: character to be checked
 * Return: 1 (true) , 0 (false)
 *
 */
int _isalpha(int c)
{
	if (((c >= 'a' && c <= 'z') ||( c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
