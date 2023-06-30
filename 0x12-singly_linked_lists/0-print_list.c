#include "lists.h"
/**
 * print_list - prints a linked list element
 * @h: the linked list head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	unsigned int i;
	char *s = "(nil)";
	char *str;

	while (h)
	{
		_putchar('[');
		_putchar('0' + h->len);
		_putchar(']');
		_putchar(' ');
		str = h->str;
		if (str == NULL)
		{
			while (*s)
			{
				_putchar(*s++);
			}
		}
		else
		{
			for (i = 0; i < (h->len); i++)
			{
				_putchar(str[i]);
			}
		}
		_putchar('\n');
		h = h->next;
		count++;
	}
	return (count);
}
