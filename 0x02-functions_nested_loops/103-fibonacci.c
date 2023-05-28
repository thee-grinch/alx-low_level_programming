#include <stdio.h>

/**
 * main - prints fibbonacci numbers
 * Return: always 9
 */
int main(void)
{
	int i;
	long int n1, n2, n3, sum;

	n1 = 1;
	n2 = 2;
	sum = 2;
	while (n3 <= 4000000)
	{
		n3 = n1 + n2;
		if (n3 % 2 == 0)
			sum += n3;
		n1 = n2;
		n2 = n3;
	}
	printf("%ld", sum);
	putchar('\n');
	return (0);
}

