#include "main.h"
/**
 * clear_bit - clears a bit
 * @n: the bit to be cleared
 * @index: the index of the number to be cleared
 * Return: 1 if succesfull or 0 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= (~(1 << index));
	return (1);
}
