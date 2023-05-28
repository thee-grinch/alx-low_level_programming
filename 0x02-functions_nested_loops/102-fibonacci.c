#include <stdio.h>

/**
 * main - prints fibbonacci numbers
 * Return: always 9
 */
int main (void)
{
	int i, n1, n2, n3;

	n1 = 1;
	n2 = 2;
	printf("%d, %d, ", n1, n2);
	for (i = 0; i <= 48; i++)
	{
		n3 = n1 + n2;
		printf("%d", n3);
		if (i != 48)
		{
			printf(", ");
		}
		n1 = n2;
		n2 = n3;
	}
	putchar('\n');
	return (0);
}

