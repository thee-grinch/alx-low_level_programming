#include <stdio.h>
/**
 * print - prints before main is excecuted
 */
void __attribute__((constructor)) print(void)
{
	printf("You're beat! and yet, you must allow,\nI bore");
	printf(" my house upon my back!\n");
}
