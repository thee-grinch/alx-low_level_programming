#include "main.h"
#include <stdio.h>
/**
 * get_bit -  gets a bit at a certain index
 * @n: the number to be checked
 * @index: theindex of the number to be cheched
 * Return: the digit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);
	i = (n >> index) & 1;

	return (i & 1);
}
