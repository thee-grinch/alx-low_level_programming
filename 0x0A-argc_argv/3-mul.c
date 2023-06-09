#include <stdio.h>
/**
 * main - prints two integers
 * @argc: count
 * @argv: vector
 * Return: zero
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		puts("Error\n");
	printf("%d\n", argv[1] * argv[2]);
	return (0);
}
