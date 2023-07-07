#include "main.h"
/**
 * flip_bits - counts the number of bits to be flipped
 * @n: the first number
 * @m: nthe second number
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (m || n)
	{
		if ((m & 1) != (n & 1))
			count++;
		m >>= 1;
		n >>= 1;
	}
	return (count);
}
