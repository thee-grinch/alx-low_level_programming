#include <stdio.h>
#include <math.h>
/**
* main - entry point
* Return: always 0
*/
int main(void)
{
	long n = 612852475143;

	int l;

	int i;

	while (n % 2 == 0)
	{
		printf("%d", 2);
		l = 2;
		n = n / 2;
	}
	for (i = 3; i < sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			n = n / i;
			if (i > l)
				l = i;
		}
	}
	if (n > 2)
		l = n;
	printf("%d", l);
	return (0);
}
