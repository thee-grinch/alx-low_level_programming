#include <stdio.h>
/**
 * main - prints the number of arguments
 * Return: zero
 * @argc: argument count
 * @argv: the argument vector
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
