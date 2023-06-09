#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the amount of coins
 * @argc: count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents, count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		putchar('0');
		putchar('\n');
		return (0);
	}
	count = 0;
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents--;
		count++;
	}
	printf("%d\n", count);
	return (0);
}
