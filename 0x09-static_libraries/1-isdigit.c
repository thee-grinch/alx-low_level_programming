#include "main.h"
/**
* _isdigit - entry point
*@c: integer to be checked
*Return: always 1
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
