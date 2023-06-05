#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sums of diagonals
 * @a: the array;
 * @size: the size of pointer
 *
 */
void print_diagsums(int *a, int size)
{
	int i, sumA, sumB;

	sumA = 0;
	sumB = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
		sumA += *(a + i);
	}
	for (i = (size - 1); i <= size * (size - 1); i += size - 1)
	{
		sumB += *(a + i);
	}
	printf("%d, %d\n", sumA, sumB);
}
