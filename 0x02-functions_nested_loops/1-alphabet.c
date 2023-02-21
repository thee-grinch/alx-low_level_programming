#include "main.h"
/*
 * main - prints all alphabets in lowercase
 * Return: always 0 (success)
 */
int main(void)
{
	/*
	 * main - check the code
	 * Return: always 0
	 */
	void print_alphabet(void)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	print_alphabet();
	return (0);
}
