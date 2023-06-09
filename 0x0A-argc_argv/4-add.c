#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds up
 * @argc: count
 * @argv: yhe argument count
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int i, sum, a;

	if (argc == 1)
	{
		puts("0");
		return (0);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		a = atoi(argv[i]);
		if (a == 0 || argv[i][0] == '\0')
		{
			puts("Error");
			return (1);
		}
		else
			sum += a;
	}
	printf("%d\n", sum);
	return (0);
}
