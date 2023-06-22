#include <stdlib.h>
#include <stdio.h>
/**
 * print - prints the opcodes
 * @num: the string
 */
void print(int num)
{
	unsigned char *ptr = (unsigned char *)&print;

	for (int i = 0; i < num; i++)
	{
		printf("%02x ", *(ptr + i));
	}

	printf("\n");
}
/**
 * main - prints opcodes
 * @argc: the argument count
 * @argv: the argument vector
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print(num);
	return (0);
}
