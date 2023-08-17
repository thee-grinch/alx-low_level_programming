#include "lists.h"

/**
 * print_dlistint - prints the contents of a linked list
 * @h: the lists head
 * Return: the number of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	dlistint_t *buffer = h->next;

	printf("%d\n", h->n);
	for (i = 0; buffer != NULL; i++)
	{

		printf("%d\n", buffer->n);
		buffer = buffer->next;
	}
	return (i + 1);
}
