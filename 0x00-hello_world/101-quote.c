#include <unistd.h>
/**
 * main - check the code
 * Return: zero
 */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, s, 58);
	return (1);
}
