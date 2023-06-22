#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: the seperator between two strings
 * @n: the number of strings on your function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
