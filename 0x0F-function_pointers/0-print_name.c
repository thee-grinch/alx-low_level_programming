#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: the pointyer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
