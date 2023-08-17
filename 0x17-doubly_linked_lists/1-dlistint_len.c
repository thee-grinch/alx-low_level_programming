#include "lists.h"
/**
 * dlistint_len - finds the length of dlistint_t
 * @h: the head
 * Return: the length
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	if (!h)
		return (0);
	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
