#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all arguments
 * @n: number of arguments
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
