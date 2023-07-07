#include "main.h"
/**
 * set_bit - sets a bit
 * @n: to be set
 * @index: the index of the numbe
 * Return: 1 if succesfull or -1 if not succesfull
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n | (1 << index));
	return (1);
}
