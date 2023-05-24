#include <stdio.h>
/**
 * main - check the code
 * Return: sum of the num
 */
int main(void)
{
	int sum, num;

	sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}
	printf("%d", sum);
	putchar(10);
	return (sum);
}
