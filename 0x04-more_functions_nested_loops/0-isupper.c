#include "main.h"
/**
* _isupper - checks whether the character is uppercase
* @c: the character to be checked
* Return: always 1
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
