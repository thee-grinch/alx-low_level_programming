#include <stdio.h>
/**
 * print_array - prints the first n terms
 * @n: the number of characters to be printed
 * @a: the array
 */
void print_array(int *a, int n)
{
	int i;

	if (n < 0)
	{
		printf(" \n");
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if ((n - i) == 1)
			printf("\n");
		else
			printf(", ");
	}
}
