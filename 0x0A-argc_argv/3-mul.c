#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints two integers
 * @argc: count
 * @argv: vector
 * Return: zero
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error\n");
		return (0);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
