#include "lists.h"
/**
 * listint_len - returns the length of a listint lists
 * @h: the listint head
 * Return: the sze
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	if (h)
	{
		while (h)
		{
			size++;
			h = h->next;
		}
	}
	return (size);
}
