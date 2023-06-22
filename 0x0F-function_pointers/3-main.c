#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code
 * @argc: the argument count
 * @argv: the argument vectror
 * Return: the argument vector
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	int (*func)(int, int) = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	result = func(arg1, arg2);
	printf("%d\n", result);
	return (0);
}
