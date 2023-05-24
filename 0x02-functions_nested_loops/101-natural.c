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
			printf("%d", num);
			sum += num;
			if (num == 1023)
				putchar(10);
			else
				printf(", ");
		}
	}
	return (sum);
}
