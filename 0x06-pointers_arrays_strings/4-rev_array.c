#include "main.h"
/**
 * reverse_array - reverses array
 * @a: the array
 * @n: size
 */
void reverse_array(int *a, int n)
{
	int i, buffer, j;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		buffer = a[i];
		a[i] = a[j];
		a[j] = buffer;
		j--;
	}
}
