#include "main.h"
/**
 * squareroot - finds the squareroot of a number
 * @n: the the number
 * Return: the squareroot
 * @g: the number of times
 */
int squareroot(int n, int g)
{
	if (g * g == n)
		return (g);
	if (g * g > n)
		return (-1);
	return (squareroot(n, g + 1));
}
/**
 * _sqrt_recursion - checks the squareroot
 * @n: the number
 * Return: the squareroot
 */
int _sqrt_recursion(int n)
{
	return (squareroot(n, 1));
}
