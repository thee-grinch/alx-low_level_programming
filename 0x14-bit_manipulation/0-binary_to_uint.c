#include "main.h"
/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: the binary string
 * Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, number = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		number <<= 1;
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			number |= 1;
	}
	return (number);
}
