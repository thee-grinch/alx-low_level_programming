#include <stdio.h>
/**
 * print_array - prints the first n terms
 * @n: the number of characters to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if ( (n - i) == 1)
			printf("\n");
		else
			printf(", ");
	}
}
