#include "main.h"
/**
 * checkPrime - checks the prime number
 * @n: the number to be checked
 * Return: 1 if true else if false
 * @x: the int
 */
int checkPrime(int x, int n)
{
	if (n % x == 0)
		return (0);
	if (x * x > n)
		return (1);
	return (checkPrime(x + 1, n));
}
/**
 * is_prime_number - checks the prime number
 * @n: the number
 * Return: one if true
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (checkPrime(2, n));

}
