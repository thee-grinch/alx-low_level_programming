#include "main.h"
#include <stdlib.h>
/**
 * swap_int - swaps two ints
 * @a: the first
 * @b: the second
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
