#include "main.h"
/**
 * get_endianness - gets indianness
 * Return: 1 or 0
 */
int get_endianness(void)
{
	int x;

	x = 1;
	if (*(char *)&x == 1)
		return (1);
	return (0);
}
