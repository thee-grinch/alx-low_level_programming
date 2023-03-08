#include "main.h"
/**
*sqrroot - check the code
*@n: the number to be checked
*@i: divisor
*Return: always 0
*/
int sqrroot(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (sqrroot(n, i + 1));
}
/**
*_sqrt_recursion - check the code
*@n: the number to be checked
*Return: always 0
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrroot(n, 0));
}
