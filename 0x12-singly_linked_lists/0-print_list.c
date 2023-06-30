#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints a linked list element
 * @h: the linked list head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%u] (nil)\n", h->len);
		}
		else
		{
			printf("[%u] %s\n", h->len,h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
