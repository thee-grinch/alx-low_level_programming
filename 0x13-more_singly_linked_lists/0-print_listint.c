#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints items of a listint list
 * @h: the lists head
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			size++;
		}
	}
	return (size);
}
