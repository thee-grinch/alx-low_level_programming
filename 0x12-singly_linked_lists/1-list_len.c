#include "lists.h"
/**
 * list_len - calculates the length of a linked list
 * @h: the list head
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
